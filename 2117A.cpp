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
     int n,x;
     cin>>n>>x;
     vector<int>a(n);

     int l= 1e5, r=-1;
     for(int i=0;i<n;i++){
          cin>>a[i];

          if(a[i] == 1){
               l = min(l,i);
               r = max(r,i);
          }
     }

     cout<<(x >= r-l+1 ? "YES" : "NO")<<endl;
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
