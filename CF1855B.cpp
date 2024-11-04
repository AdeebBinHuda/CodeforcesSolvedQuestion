#include<bits/stdc++.h>
using namespace std;
void solve(){
      long long n;
     cin>>n;
     int ans=0;
     for(int i=1;i<=n;i++){
          if(n%i!=0)
           break;
           ans++;
     }
     cout<<ans<<endl;
}
int main(){
     //codeforces.com/contest/1855/problem/B
     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
     int t;
     cin>>t;
     while(t--){

        solve();
    }
    return 0;
}
