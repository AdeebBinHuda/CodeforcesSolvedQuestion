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
     vector<ll>a(n);
     for(auto &x: a)
          cin>>x;
     if(n<=2){
          cout<<-1<<endl;
          return;
     }

     sort(a.begin(),a.end());
     const ll k= n/2+1;
     const ll ak= a[k-1];
     // addition of all sum
     const ll sum = accumulate(a.begin(),a.end(),0LL);
     const ll ans = max(0LL,2*n*ak-sum+1);
     cout<<ans<<endl;
    /* if(n==1){
          cout<<-1<<endl;
          return;
     }

     vector<ll>a(n);
    ll mx=0;
    ll all_add=0;
     for(ll i=0;i<n;i++){
          cin>>a[i];
          mx= max(mx,a[i]);
          all_add += a[i];
     }
     sort(a.begin(),a.end());
    ll ans=0;
     if(n==2){
          if(mx/2>a[0]){
               cout<<-1<<endl;
               return;
          }
     }
     else{
         int c=(n+2-1)/2;
         if(n%2==0)
               c+=1;
         ll avg=all_add/n;

         for(int i=0;i<c;i++){
          if(a[i]<2*avg)
               ans+= 2*avg-a[i]-1;
         }
     }
 cout<<ans<<endl;
*/

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
