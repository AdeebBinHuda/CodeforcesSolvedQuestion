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
     int a[n];
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     set<ll>s;
     for(int i=0;i<n;i++){
          s.insert(i+1);
     }

     for(int i=0;i<n;i++){
          if(s.find(a[i]) != s.end()){
             cout<<a[i]<< ' ';
             s.erase(a[i]);
             }
             else{
               cout<<*s.begin()<< ' ';
               s.erase(s.begin());
             }
     }
     cout<<"\n";
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
