#include<bits/stdc++.h>
using namespace std;
void solve(){
     int l,r;
     cin>>l>>r;
     const long long int dff= r-l;
     long long int i=0,ans=0;

     while(i*(i-1)/2<=dff){
          ans=i;
          i++;
     }
     cout<<ans<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
