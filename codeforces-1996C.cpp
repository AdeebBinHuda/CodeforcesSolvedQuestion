#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
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
     ll n,q;
     cin>>n>>q;
    string a,b;
    cin>>a>>b;
    a = "0"+a;
    b = "0"+b;

    const ll N = 26;
    vector<vector<int>> prefA(n + 1, vector<int>(N, 0));
    vector<vector<int>> prefB(n + 1, vector<int>(N, 0));
  //  vector<vi>prefA(n+1,vi(N)),prefB(n+1,vi(N));

    for(ll j=1;j<=n;j++){
     prefA[j] = prefA[j-1];
     const ll aj = a[j]-'a';
     prefA[j][aj]++;
    }

    for(ll j=1;j<=n;j++){
     prefB[j] = prefB[j-1];
     const ll bj = b[j]-'a';
     prefA[j][bj]++;
    }

    while(q--){
     ll l,r;
     cin>>l>>r;
     ll ans=0;
     for(ll j=0;j<N;j++){
          const ll a1 = prefA[r][j]- prefA[l-1][j];
          const ll b1 = prefB[r][j] - prefB[l-1][j];
          if(a1>=b1)
               ans += a1-b1;

     }
     cout<<ans<<endl;
    }
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
