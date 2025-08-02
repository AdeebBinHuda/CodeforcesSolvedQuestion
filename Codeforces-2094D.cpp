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

/*void solve(){
    string p,s;
    cin>>p>>s;

    int i=0,j=0;
    while(i<p.size() || j<s.size()){
       if(i==p.size() ||  j==s.size() || p[i]!=s[j]){
          cout<<"NO"<<endl;
          return;
       }

       int a=i,b=j;

      while(i<p.size() && p[i]==p[a])
          i++;

      while(j<s.size() && s[j]==s[b])
          j++;

       if(j-b < i-a || (i-a)*2 < j-b){
          cout<<"NO"<<endl;
          return;
       }
    }
    cout<<"YES"<<endl;
}
*/
string p,s;

void solve(){
     cin>>p>>s;
     string ans="YES";
     if(p.back()!= s.back()){
          ans="NO";
     }
     while(!p.empty() && !s.empty()){
          char c= p.back();

          int a,b;
          for(a=0; !p.empty() && p.back() == c ; a++ , p.pop_back());
          for(b=0; !s.empty() && s.back() == c ; b++ , s.pop_back());
          if(b<a || b > 2*a)
               ans= "NO";
     }
     if(p.size()==true|| s.size()==true)
          ans="NO";
     cout<<ans<<'\n';
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
