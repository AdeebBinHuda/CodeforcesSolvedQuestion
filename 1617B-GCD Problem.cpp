#include<bits/stdc++.h>
#define ll long long
ll gcd(ll a, ll b)                        { if (b == 0) return a; return gcd(b, a % b); }
using namespace std;
int main(){
    //https://codeforces.com/problemset/problem/1617/B
    int t;
    cin>>t;
    while(t--){
     ll n;
     cin>>n;
     ll a,b,c;
      for(int a=2;a<n;a++){
          b=n-a-1;
          if (gcd(a,b)!=1)
               continue;
          if(gcd(a,b)==1){
               cout<<a<<" "<<b<<" "<<1<<endl;
               break;
          }
      }
    }
    return 0;
}
