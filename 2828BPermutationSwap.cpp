#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n,ans=0;
     cin>>n;
     for(int i = 1; i <= n; i++){
          int x;
          cin>>x;
          if(abs(x-i)!=0) {
              ans = __gcd(ans,abs(x-i));
          }
     }
     cout<<ans<<'\n';
}
signed main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}
