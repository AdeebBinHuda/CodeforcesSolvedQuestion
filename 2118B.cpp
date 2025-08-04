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
     ll  n;
     cin>>n;
     vector<ll>a(n);
     for(auto & it:a) cin>>it;

      ll d = a[1]-a[0];

     bool b= 0;
     for(int i=2;i<n;i++)
          if(d!=a[i]-a[i-1])
               b=1;
                 if(b) {
        cout << "NO" << endl;
        return;
    }
     for(int i = 0; i < n; i++)
        a[i] = a[i] + (d < 0 ? d* (n - i) : -d * (i + 1));

    cout << (a[0] >= 0 && a[0] % (n + 1) == 0 ? "YES" : "NO") << endl;

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
