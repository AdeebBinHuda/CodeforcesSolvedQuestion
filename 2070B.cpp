#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
     ll n, x,k;
     cin>>n>>x>>k;
     string s;
     cin>>s;
     for(ll i = 0 ; i < n ; i++){
          x+= (s[i]=='L' ? -1 : 1); // Adjust position x based on 'L' or 'R'
          k--;  // consume one move

          if(!x) break; // If x becomes zero (position reached), exit the loop early

     }
     ll ans=0;
     if(!x){  // If x is zero after the first loop
         ans = 1;
         for(ll i=0;i<n;i++){
          x+=(s[i]=='L'? -1:1); // Adjust position x based on 'L' or 'R'
          if(!x){
               ans += k/(i+1); // Calculate the number of full cycles that can be completed
          break;
          }
         }

     }
     cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
