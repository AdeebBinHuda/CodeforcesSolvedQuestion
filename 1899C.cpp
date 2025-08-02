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
     //codeforces.com/problemset/problem/1899/C
     int n;cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;++i){
          cin>>a[i];
     }
     int ans= a[0];
     int mn= min(0,a[0]),sum=a[0];

     for(int i=1;i<n;++i){
          if (abs(a[i]%2)== abs(a[i-1]%2)){
              mn = 0;
              sum = 0;
          }
          sum+=a[i];
          ans = max(ans,sum-mn);
          mn= min(mn,sum);
          //cout<<"for sum "<<i<<" "<<sum<<endl;
          //cout<<"for ans "<<i<<" "<<ans<<endl;
          //cout<<"for mn "<<i<<" "<<mn<<endl;
     }
     cout<<ans<<endl;
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
