#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
const ll mod =1e9+7;

vector<ll> divisors(ll n){
     vector< ll> v;
     for(ll i=1;i<= sqrt(n);i++){
          if(n%i ==0){
               if(n/i==i){
                    v.push_back(i);
               }else{
                    v.push_back(i);
                    v.push_back(n/i);
               }
          }
     }
     return v;
}
void solve(){
     ll a,b,l,comp,cnt=0;
     cin>>a>>b>>l;
     vector<ll> k = divisors(l);
     vector<ll> x,y;
     for(ll i =0;i<=20;i++){
          comp = pow(a,i);
          if(comp <= 1e6){
               x.push_back(comp);
          }
          else
               break;
     }
     for(ll i=0;i<=20;i++){
          comp = pow(b,i);
          if(comp <=1e6){
               y.push_back(comp);
          }
          else
               break;
     }
     for(ll i=0;i<(ll)k.size();i++){
       ll f=0;
     for(ll j=0;j<(ll)x.size();j++){
          for(ll m=0;m<(ll)y.size();m++){
               if(k[i]*x[j]*y[m]==l){
                    cnt++;
                    f=1;
                    break;
               }
          }
          if(f==1)
               break;
       }
    }
    cout<<cnt<<endl;
}
int main(){
    cin.tie(nullptr); cout.tie(nullptr);
    ios::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    int t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}
