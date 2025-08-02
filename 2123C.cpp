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
    string ans= "";

    int a[n],pre[n],suf[n];

    for(int i=0;i<n;i++){
     cin>>a[i];
    }

    pre[0]=a[0];
    suf[n-1]=a[n-1];

    for(int i=1;i<n;i++){
     pre[i]=min(pre[i-1],a[i]);
    }
    for(int i=n-2;i>=0;i--){
     suf[i]=max(suf[i+1],a[i]);
    }

    for(int i=0;i<n;i++){
     if(pre[i]<a[i] && suf[i]>a[i]){
          ans+='0';
     }else{
          ans+='1';
     }
    }
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
