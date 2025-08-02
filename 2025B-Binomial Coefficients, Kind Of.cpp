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

}
int main(){
    cin.tie(nullptr); cout.tie(nullptr);
    ios::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif
   ll C[1000000007][1000000007];
   ll t;
   cin>>t;
   vector<ll>n(t);
   vector<ll>k(t);
    for(int i=0;i<t;i++){
     cin>>n[i];
    }
    for(int i=0;i<t;i++){
     cin>>k[i];
    }
    int N=t;
     for (int n = 0; n < N; n++) { // loop over n from 0 to N-1 (inclusive)
        C[n][0] = 1;
        C[n][n] = 1;
        for (int k = 1; k < n; k++) // loop over k from 1 to n-1 (inclusive)
            C[n][k] = C[n][k - 1] + C[n - 1][k - 1];
            cout<<C[n][k];
    }
    cout<<endl;

    return 0;
}
