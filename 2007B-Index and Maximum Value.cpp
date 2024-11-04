#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
     ll n,m;
     cin>>n>>m;
     vector<ll>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     sort(a.begin(),a.end());
     for(int i=0;i<m;i++){
          char c;
          ll l,r;
          cin>>c>>l>>r;
          if(c=='+'){
               if(a[n-1]>=l && a[n-1]<=r){
                   a[n-1]++;
                   cout<<a[n-1]<<" ";
               }else{
                    cout<<a[n-1]<<" ";
               }
          }
          else{
               if(a[n-1]>=l && a[n-1]<=r){
                    a[n-1]--;
                    cout<<a[n-1]<<" ";
               }else{
                    cout<<a[n-1]<<" ";
               }
          }
     }
     cout<<endl;
}
int main(){
     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
