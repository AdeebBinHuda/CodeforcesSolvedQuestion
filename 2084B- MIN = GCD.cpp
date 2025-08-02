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
     int n;
     cin>>n;
     vector<ll>a(n);
     for(ll & x:a){
          cin>>x;
     }
     int p= min_element(a.begin(),a.end())-a.begin();// index can found
     ll g=0;
     for(int i=0;i<n;i++){
          if(i!=p && a[i]%a[p]==0){
               g= __gcd(g,a[i]);
          }
     }
     cout<<(g==a[p]? "YES\n":"NO\n" );
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
