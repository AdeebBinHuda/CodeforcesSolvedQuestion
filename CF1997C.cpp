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
     string s;
     cin>>s;

     ll det=0;
     for(int i=0;i<n;i++){
          if(s[i]=='(')
               det++;
          if(s[i]==')')
               det--;
     }
     s[0]='(';
     for(ll j=n-2;j>0;j-=2){
          if(s[j-1]=='(')
               s[j]= '(';
          else
               s[j]='(';
     }
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
