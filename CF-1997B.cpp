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
     vector<string>s(2);
     for(auto& x:s)
          cin>>x;
     int ans=0;

     for(int i=1;i<n-1;++i){
          bool ok = true;
          ok &= (s[0][i] == '.'&& s[1][i]=='.');
          ok &= (s[0][i-1] != s[1][i-1]);
          ok &=  (s[0][i+1] != s[1][i+1]);
          ok &=  (s[0][i-1] == s[0][i+1]);

          ans += ok;
     }
     printf("%d\n",ans);
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
