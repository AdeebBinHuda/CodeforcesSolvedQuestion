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
     int n;
     cin>>n;
     vector<int>a;
     a.push_back(-1e9);
     for(int i=0;i<n;i++){
          int x;
          cin>>x;
          if(a.back()==x);
          else a.push_back(x);
     }
     a.push_back(-1e9);

     int ans=0;
     for(int i=1; i<a.size()-1;i++)
          if(a[i-1]<a[i] && a[i]>a[i+1])
          ans++;
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
