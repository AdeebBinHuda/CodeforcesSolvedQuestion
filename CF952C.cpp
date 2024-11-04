#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define W(t) int t;cin >> t;while(t--)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define PI 3.141592653589793238462
#define set_bits(x) __builtin_popcountll(x)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

ll factorial(ll n)                        { if(n==0) return 1; ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; }
ll nPr(ll n, ll r)                        { return factorial(n) / factorial(n - r); }
ll nCr(ll n, ll r)                        { return factorial(n) / (factorial(r) * factorial(n - r));}
ll gcd(ll a, ll b)                        { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)                        { return (a * b) / gcd(a, b);}
ull mypow(ull a, ull b,ull m=MOD)         { ull ans = 1; a%=m; while(b){ if (b&1) ans = (ans*a) % m; a = (a*a) % m; b >>= 1; } return ans; }
bool isPrime(ll n)                        { if(n <= 1) return false; for(ll i = 2; i*i <= n; i++) if(n % i == 0) return false; return true; }

void solve(){
    int n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
          cin>>arr[i];
    }
    sort (arr.begin(),arr.end());
    if(n==1  &&  arr[0]==0 ){
     cout<<1<<endl;
    }
    else if(n==1 && arr[0]==1){
     cout<<0<<endl;
    }else{
         int sum=0,cont=0; //count = cont
         for(int i=0;i<n-1;i++){
          sum+=arr[i];
           cont++;
          if(sum ==arr[n]){
               return ;
          }

         }
         cout<<cont<<endl;
    }
}

int main(){
    W(t){
        solve();
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{

   int t;
   cin>>t;
   while (t--){
       int n;
       cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum=0;
    int mx=0,ans=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        mx= max(mx,arr[i]);
        if(sum - mx == mx)
           ans++;

    }
    cout<<ans<<endl;
   }

    return 0;
}
*/
