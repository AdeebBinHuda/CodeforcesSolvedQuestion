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

void solve(){
     ll x;
     cin>>x;
    ll ans=-1;

    for(ll i=0;i<30;i++){
     for(ll j=0;j<30;j++){
       int  y =  (1<<i) | (1<<j);
         if(y<x && (x+y>(x^y)) && (y+(x^y)>x)){
           ans=y;
         }
       }
    }
    cout<<ans<<endl;
}
signed main(){
    cin.tie(nullptr); cout.tie(nullptr);
    ios::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    ll t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}
