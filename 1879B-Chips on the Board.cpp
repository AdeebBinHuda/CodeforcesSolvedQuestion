#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, sum=0, sum2=0;
    cin>>n;
    vector< ll> a(n),b(n);

    for(ll i=0;i<n;i++){
     cin>>a[i];
     sum+= a[i];
    }
    for(ll i=0; i<n;i++){
     cin>> b[i];
     sum2+= b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll mini= min((a[0]*n)+sum2,(b[0]*n)+sum);
    cout<<mini;
    cout<<'\n';
}
int main(){
     int t;cin>>t;
     while(t--){
        solve();
     }
    return 0;
}
