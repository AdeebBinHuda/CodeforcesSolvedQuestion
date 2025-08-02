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
const int N=2e5+10;
int t,n,m,a[N],b[N];
void solve(){


     cin>>n>>m;

     for(int i=1;i<=n;i++)cin>>a[i];
     for(int j=1;j<=m;j++) cin>>b[j];

     sort(b+1,b+m+1);
     int p = min(b[1]-a[1],a[1]);

     for(int i=2;i<=n;i++){
          if(max(b[m]-a[i],a[i])<p){
               cout<<"NO\n";
               return;
          }
          int pos= lower_bound(b+1,b+m+1,p+a[i])-b;
          if(pos>m) p=a[i];
          else if(a[i]>=p) p=min(b[pos]-a[i],a[i]);
          else p=b[pos]-a[i];
     }
     cout<<"YES\n";

}
int main(){
    cin.tie(nullptr); cout.tie(nullptr);
    ios::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif


    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}
