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
     string t;
     cin>>s>>t;
     int ptr=0;
     for(int i=0;i<s.size();i++){
          if(s[i]=='?'){
               if(ptr<t.size())
                    s[i]=t[ptr];
               else
                    s[i]='a'; // random char
          }

          if(ptr<t.size() && s[i]==t[ptr]) ptr++;
     }
     if(t.size()== ptr){
          yes;
          for(int i=0;i<s.size();i++)
               cout<<s[i];
               cout<<'\n';
     }

     else {
          no;
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
