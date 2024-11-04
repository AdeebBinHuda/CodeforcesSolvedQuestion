#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
typedef long long ll;
int main(){
     //https://codeforces.com/contest/1585/problem/B
    ll t;
    cin>>t;
    while(t--){
     ll n,a;
     cin>>n;
     vector<ll>v;
     for(int i=0;i<n;i++){
          cin>>a;
          v.push_back(a);
     }
     ll cnt=0,maxn=v[n-1];
     for(ll i=n-2;i>=0;i--){
          if(maxn<v[i]){
               cnt++;
               maxn=v[i];
          }
     }
     cout<<cnt<<endl;
    }
    return 0;
}
