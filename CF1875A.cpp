#include<bits/stdc++.h>
using namespace std;
int n=0,a=0,b=0;
long long ans=0;
void solve(){
     int a,b,n;
     cin>>a>>b>>n;
     ans=b;

     for(int i=0,x=0;i<n;i++){
          cin>>x;
          ans+=min(a-1,x);
     }
     cout<<ans<<endl;

}
int main(){
     //codeforces.com/problemset/problem/1875/A
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
