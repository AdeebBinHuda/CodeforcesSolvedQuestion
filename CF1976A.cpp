#include<bits/stdc++.h>
#include <string>
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
     cin>>n;

     string s;
     cin>>s;
     string digit,letter;
    for(char c:s){
      if(isdigit(c)){
          digit.push_back(c);
      }else if(islower(c)){
           letter.push_back(c);
      }
    }
    bool digit_sort=is_sorted(begin(digit),end(digit));

    bool letter_sort=is_sorted(begin(letter),end(letter));

    bool di_after_le=false;
    for(char c:s){
         if(islower(c)){
          di_after_le=true;
         }else if(di_after_le){
            cout<<"NO"<<endl;
            return;
         }
    }

    if(digit_sort && letter_sort){
     yes;
    }
    else{
     no;
    }
}

int main(){
     fastio();
    W(t){
        solve();
    }
    return 0;
}
