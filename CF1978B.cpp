#include<bits/stdc++.h>
using namespace std;
void solve(){
     long long n,a,b;
     cin>>n>>a>>b;
     if(a>=b){
          cout<<a*n<<endl;
     }else{
          long long k=min(b-a,n);
          long long ans=(b+b-k+1)*k/2+(n-k)*a;
          cout<<ans<<endl;
     }
}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
