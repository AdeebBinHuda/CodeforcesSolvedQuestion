#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n,m,k;
     cin>>n>>m>>k;
     int x,y;
     cin>>x>>y;
     string ans="YES\n";
     for(int i=0;i<k;++i){
          int xx,yy;
          cin>>xx>>yy;
          if((x + y)%2 == (xx+yy)%2){
               ans = "NO\n";
          }
     }
     cout<< ans;
}
int main(){
   int t;cin >>t;
    while(t--){
     solve();
    }

    return 0;
}
