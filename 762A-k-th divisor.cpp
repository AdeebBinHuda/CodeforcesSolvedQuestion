// Problem: A. k-th divisor
// Contest: Codeforces - Educational Codeforces Round 17
// URL: https://codeforces.com/problemset/problem/762/A
#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
     int n,k;
     cin>>n>>k;
     //int ans=0;
     vector<int>v;
    for(int i=1;i*i<=n;i++){
     if(n%i==0){
          v.push_back(i);
          if(i!=n/i){
              v.push_back(n/i);
          }
       }
    }
    sort(v.begin(),v.end());
    if(k>v.size()){
     cout<<"-1"<<endl;
    }
     else{
     cout<<v[k-1]<<endl;
     }
    return 0;
}
