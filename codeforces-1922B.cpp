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
#define int long long
void solve(){
     int n;
     cin>>n;
     map<int,int>mp;
     for(int i=0;i<n;i++){
          int x;
          cin>>x;
          mp[x]++;
     }
     int ans=0,sum=0;
     for(auto i:mp){
          if(i.second>=3){
              ans+= i.second*(i.second-1)*(i.second-2)/6;
          }
          if(i.second>=2){
               ans+= i.second*(i.second-1)/2*sum;
          }
          sum += i.second;
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
