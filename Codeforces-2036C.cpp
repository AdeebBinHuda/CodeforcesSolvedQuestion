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
     string s;
     cin>>s;
     int q;
     cin>>q;
     int n=s.size();
     int cnt=0;
    for(int i=0;i<n-3;i++){
     if(s.substr(i,4)=="1100")
          cnt++;
    }
    while(q--){
     int i,v;
     cin>>i>>v;
     i--; // for the 0 indexing
     for(int j=i-3;j<i+1;j++){
          if(j<0 || j+3>=n)
               continue;
          if(s.substr(j,4)=="1100")
               cnt--;
     }
     s[i]='0'+v;
     for(int j=i-3;j<i+1; j++){
          if(j < 0 || j+3 >= n)
               continue;
          if(s.substr(j,4)== "1100")
               cnt++;
     }
     if(cnt > 0)
          cout<<"YES\n";
     else
          cout<<"NO\n";
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
