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

     vector<int>v(4);
     for(int i=0;i<4;i++){
          if(s[i]=='0') v[i]=10;
          else v[i]= s[i]-'0';
     }

     int ans =0;
     for(int i=1;i<4;i++)
      ans+= abs(v[i]-v[i-1]);
      ans+= abs(v[0]-1);
      cout<<ans+4<<endl;   // for the 4 click ans+4

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
