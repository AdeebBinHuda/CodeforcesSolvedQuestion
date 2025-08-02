#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
#define int  long long
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
     vector<int>vec(n);
     for(int i=0;i<n;i++)
          cin>>vec[i];

     int p=0;
     int ans=0;
     for(int k=1;k<n;k++){
               if(n%k != 0) continue;
       int mn= LLONG_MAX, mx = LLONG_MIN;
       for(int i=0;i<n;i+=k){
          for(int j=i;j<i+k;j++)
               p+= vec[j];

          mx = max(mx,p);
          mn = min(mn,p);
          p=0;
       }
          ans = max(ans,mx-mn);
     }
     cout<<ans<<endl;
}
int32_t main(){
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
