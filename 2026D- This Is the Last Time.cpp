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
struct node{
     int l,r,real;
};
bool cmp(node a,node b){
     if(a.l!=b.l){
          return a.l<b.l;
     }
     if(a.r!=b.r){
          return a.r<b.r;
     }
     return a.real<b.real;
}
void solve(){
     ll n,k;
     cin>>n>>k;
     vector<node>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i].l>>a[i].r>>a[i].real;
     }
     sort(a.begin(),a.end(),cmp);

     for(int i=0;i<n;i++){
          if(k>=a[i].l && k<=a[i].r && k<a[i].real){
               k=a[i].real;
          }
     }
     cout<<k<<endl;
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
