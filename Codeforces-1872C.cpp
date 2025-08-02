#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
//#define int long long
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
const int32_t MAX= 1e7+7;
int pf(ll n){
     if(n==1){
          return -1;
     }
      if(n==2){
          return -1;
      }
    for(ll i=2;i*i<=n;i++){
     if(n%i==0){
          return i;
      }
    }
    return -1;
}
void solve(){
     int l,r;
     cin>>l>>r;
    if(l==1 && r==1)
    {
         cout<<-1<<endl;
         return;
    }
    if(l==1){
     for(int i=2;i<=r;i++){
        ll ans =pf(i);
        if(ans!=-1){
          cout<<ans*((i/ans)-1)<<" "<<ans<<endl;
          return;
       }
      }
    }
    else{
      for(int i=l;i<=r;i++){
          ll ans = pf(i);
          if (ans !=-1){
               cout<<ans*((i/ans)-1)<<' '<<ans<<endl;
               return ;
          }
      }
    }
    cout<<-1<<endl;
    return;
    /* bool flag= false;
     while(l<=r)
          {
                int a=1, b=MAX-1;
               if(l<=a+b && r>=a+b){
                    if(gcd(a,b)!=1){

                         cout<<a<<" "<<b;
                         flag =true;
                         break;


                    }
                    else{
                          a++;
                         b--;
                    }

               }
          }
          if(flag==false){
               cout<<-1<<endl;
          }*/
}
int32_t main(){
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
