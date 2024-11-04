#include<bits/stdc++.h>
using namespace std;
void solve(){
     //codeforces.com/problemset/problem/1900/B
     int a,b,c;
     cin>>a>>b>>c;
     vector<int>ans(3);
     if(a%2==b%2){
          ans[2]=1;
     }
     if(a%2==c%2){
          ans[1]=1;
     }
     if(b%2==c%2){
          ans[0]=1;
     }
     cout<<ans[0]<<' '<<ans[1]<<' '<<ans[2]<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
