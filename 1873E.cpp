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
const int MAX = 200007;
const int MOD = 1000000007;

void solve(){
     int n;
     ll x;
     cin>>n>>x;
     ll a[n];
     for (int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     ll lo =0,hi= 2000000007;
     while(lo < hi){
          ll mid = lo + (hi - lo + 1)/2;
          ll total=0;
          for(int i=0;i<n;i++){
               total += max(mid - a[i],0LL);
          }
          if(total <=x) {
               lo=mid;
          }
          else {
               hi = mid-1;
          }
     }
       cout<<lo <<endl;
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
