#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
#define int long long
const int N= 3e5+10;
int a[N];
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

     int sum1=0 ,sum2=0 ,sum=0;
     for(int i=1;i<=n;i++){
          cin>>a[i];
          if(i%2)
               sum1+=a[i];
          else
               sum2+=a[i];
          sum += a[i];
     }

     if(sum % n==0){
          int o = (n+1)/2;
          int e= n-o;
          sum/=n;
          if(sum1 == o*sum && sum2==e*sum){
               cout<<"YES\n";
              return;
          }
     }
     cout<<"NO\n";
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
