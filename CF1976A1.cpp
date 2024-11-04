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

using lli = long long int;
//const lli INF = 0xFFFFFFFFFFFFFFFLL;
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
    lli n;
    cin>>n;
    vector<int>a(n),b(n+1);
    for(auto &x:a)
     cin>>x;
    for(auto &x:b)
     cin>>x;
    lli change =0;
    for(lli i=0;i<n;i++)
    change+=abs(a[i]-b[i]);


    const lli bn=b[n];
    lli changeLast =INF;
    for(lli i=0;i<n;i++){
       if(a[i]<b[i]){
          if(bn<=a[i]){
               changeLast=min(changeLast,abs(a[i]-bn)+1);
               continue;
          }
          if(bn<b[i]){
                // when we are doing + operatings, at some point ai will be equal to bn
                // make a copy at that instant.
          changeLast=1;
          continue;
          }
           // make a copy at the end
          changeLast=min(changeLast,abs(b[i]-bn)+1);
          continue;
       }
        // make a copy at the end
        if(bn<b[i]){
           changeLast=min(changeLast,abs(b[i]-bn)+1);
            continue;
        }
        if(bn<=a[i]){
            // when we are doing - operatings, at some point ai will be equal to bn
            // make a copy at that instant.
            changeLast=1;
            continue;
        }
        //make a copy in starting
        changeLast=min(changeLast,abs(a[i]-bn)+1);
        continue;
    }
      cout<<change+changeLast<<endl;

}

int main(){
     //codeforces.com/contest/1976/problem/B
    W(t){
        solve();
    }
    return 0;
}
