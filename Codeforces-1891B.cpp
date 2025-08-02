#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;
#define int long long
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
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(int j=0;j<n;j++){
     cin>>a[j];
    }

    vector<int>b(q);
    int temp=1;
    cin>>b[0];
    for (int i=0; i<q;i++){
       int x; cin >> x;
       if(x < b[temp-1]){
          b[temp]=x;  //swap
          temp++;
       }

    }

     for(int j=0;j<n;j++){
          for(int i=0;i<temp;i++){
               //safe shift
          int power_of_two =1<< b[i];
               if( a[j] % power_of_two==0){
                    a[j]+= power_of_two/2;
               }
          }
           cout<<a[j]<<" ";
     }
     cout<<endl;

}
int32_t main(){
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
