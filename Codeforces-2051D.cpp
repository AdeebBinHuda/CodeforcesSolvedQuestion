#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
#define int long long
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
const int N = 1e6 + 10;

int n,x,y;
int a[N];
void solve(){
    /* int n,x,y;
     cin>>n>>x>>y;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }

     vector<int>prefix(n);
     for(int i=1;i<n;i++){
          prefix[i]= prefix[i-1]+a[i];
     }
     int cunt =0;
     for(int i=0;i<n;i++){
          for(int j=1;j<n;j++){
               if(prefix[j]-prefix[j-1]>=x || prefix[j]-prefix[j-1]<=y){
                    cunt++;
                    break;
               }
          }
     }
     cout<<cunt<<endl;*/


     cin>>n>>x>>y;
     int mx=0;

     for(int i=1;i<=n;i++){
          cin>>a[i];
          mx+=a[i];
     }
     sort(a+1,a+1+n);
     int ans=0;
     for(int i=1;i<=n;i++){
          auto l= upper_bound(a+i+1,a+1+n,mx-x-a[i]);
          auto r= lower_bound(a+i+1,a+1+n,mx-y-a[i]);
       ans += l-r;
     }
     cout<<ans<<endl;
}
signed main(){
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
