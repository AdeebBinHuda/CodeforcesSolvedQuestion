#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
     //https://codeforces.com/problemset/problem/1921/C
     int n,f,a,b;
     cin>>n>>f>>a>>b;
     vector<int>vec(n);
     for(int i=0;i<n;i++){
          cin>>vec[i];
     }
     int previus =0, mini= INT_MAX;
     for(int i=0;i<n;i++){
          mini= min(b,abs(previus-vec[i])*a);
          f-=mini;
          previus= vec[i];
     }
     if(f>0)cout<<"YES\n";
     else cout<<"NO\n";

}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
