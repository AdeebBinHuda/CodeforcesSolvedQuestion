#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n, k;
    cin >> n >> k;

    map<ll,ll>mp;
    for (ll i = 0; i < n; i++) {
          ll x;
        cin >> x;
       mp[x]++;  // taking the value or count
    }

    vector<ll>v;
    for(auto z:mp){
     v.push_back(z.second);// store count to vector
    }

    sort(v.begin(),v.end());
    ll ans = v.size();
    for(auto z:v){
      k-=z;  // k decreses from v[i] or v value of z
      if(k>=0) ans--;

    }

    ans= max(ans,1ll);
    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
