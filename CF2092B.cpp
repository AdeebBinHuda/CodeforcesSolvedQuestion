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
    string a,b;
    cin>>a>>b;
    int cnt1=0, cnt2=0;
    /*
       for 0 1 0 0 0 1
           0 1 0 1 1 1

    i |   i & 1 (Odd?) | a[i] | b[i] | Action                            | cnt1 | cnt2

    0 |   0(Even)      | '0' | '0'   | cnt1++ and cnt2++                    | 1 | 1
    1 |   1(Odd)       | '1' | '1'   | nothing (a[1] != '0', b[1] != '0')   | 1 | 1
    2 |   0(Even)      | '0' | '0'   | cnt1++ and cnt2++                    | 2 | 2
    3 |   1(Odd)       | '0' | '1'   | a[3]=='0' → cnt2++                   | 2 | 3
    4 |   0(Even)      | '0' | '1'   | cnt1++                               | 3 | 3
    5 |   1(Odd)       | '1' | '1'   | nothing (a[5] != '0', b[5] != '0')   | 3 | 3
    */
    for(int i=0;i<n;i++){
      if(i & 1){
          cnt2 += a[i] =='0';
          cnt1 += b[i] == '0';
      }else{
           cnt1 += a[i] == '0';
           cnt2 += b[i] == '0';
      }
    }
    cout<< (cnt1 >= (n+1)/2 && cnt2>= n/2 ? "YES": "NO")<<endl;
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
