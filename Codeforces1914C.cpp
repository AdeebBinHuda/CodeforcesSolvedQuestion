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
     int n,k;
     cin>>n>>k;
     vector<int>vec1(n),vec2(n);
     for(int i=0;i<n;i++){
          cin>>vec1[i];
     }
     for(int i=0;i<n;i++){
          cin>>vec2[i];
     }

     vector<int>diff(n+10);
     diff[0] = vec2[0];
     for(int i=1;i<n;i++){
          diff[i]=max(diff[i-1],vec2[i]);
     }

     int ans=0, total = 0;
     for(int i=0;i<min(n,k);i++){
          total += vec1[i];
         int r= k-(i+1);
         int p= total+r*diff[i];

         ans=max(ans,p);
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
