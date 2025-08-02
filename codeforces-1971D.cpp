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
     string s;
     cin>>s;
     int i=0,j=0,n=s.size();
     int ans=1;
      for(int i=0;i<n-1;i++){
          if(s[i]!=s[i+1]){
               ans++;
          }
      }
      for(int i=0;i<n-1;i++){
          if(s[i]=='0' && s[i+1]=='1'){
               ans--;
               break;
          }
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
