/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
      ll l,r,k;
      cin>>l>>r>>k;
      ll st=l;
      ll last=r;
      ll max1= -1;
      while(st <= last){
          ll mid= st+(last - st) /2;
          if(mid*k <= r){
             max1 = mid;
             st  = mid+1;
           }
           else{
               last = mid-1;
           }
      }
      if(max1 == -1){
          cout<<0<<'\n';
      }
      else{
          cout<<max1-l+1<<'\n';
      }
}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}*/
#include <iostream>
using namespace std;

#define ll long long

void solve() {
    ll l, r, k;
    cin >> l >> r >> k;

    ll cunt = 0;
    for (ll x = l; x <= r; ++x) {
        if (x * k <= r) {
            cunt++;
        } else {
            break; // Stop early as further values will also fail.
        }
    }
    printf("%lld\n",cunt);
}

signed main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
