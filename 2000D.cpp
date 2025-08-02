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
     ll n;
     cin>>n;
     vector<ll>a(n+1,0);
    for(ll i=1;i<=n;i++){
     ll x;
     cin>>x;
     a[i]=a[i-1]+x;
    }
     string s;
     cin>>s;

     ll ans=0;
     ll l=0, r=n-1;

     while(r>l){
          while(l<n && s[l]=='R')
               l+=1;


          while(r>=0 && s[r]=='L')
               r-= 1;
               if(l<r){
                    ans+= a[r+1]-a[l];
                    l+=1;
                    r-=1;
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
