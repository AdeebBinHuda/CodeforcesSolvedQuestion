#include<bits/stdc++.h>
using namespace std;


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
#define lli long long int
void solve(){
    lli n,k;
    cin>>n>>k;
    vector<lli>a(n);
    for(lli i=0;i<n;i++){
     cin>>a[i];
    }

    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int ans = 0;
    for(lli j=0;j<n;j++){
     if(j&1)
          ans-=a[j];
     else
          ans+=a[j];
    }
   lli remOp = k;
   for(lli j=1;j<n;j+=2){
     lli curOp = a[j-1]-a[j];
     const lli c = min(curOp,remOp);
     ans -= c;
     remOp -=c;
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
