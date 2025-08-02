#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
     ll n;
     cin>>n;
     vector<ll> a(n),b(n);
     set<ll>elements;

    for(ll i=0;i<n;i++){
     cin>>a[i];
     elements.insert(a[i]);
    }

    for(ll i=0;i<n;i++){
     cin>>b[i];
     elements.insert(b[i]);
    }

     map<ll,ll> mp1,mp2;
     ll cnt = 1;
     mp1[a[0]] = 1;
     // find out the maximum unique element of a
     for(ll i=1;i<n;i++){
          if(a[i]==a[i-1])
               cnt++;
          else
               cnt=1;

          mp1[a[i]] = max(mp1[a[i]],cnt);
     }

     mp2[b[0]] = 1;
      cnt = 1;
     // find out the maximum unique element of b
     for(ll i=1;i<n;i++){
          if(b[i]==b[i-1])
               cnt++;
          else
               cnt=1;

          mp2[b[i]] = max(mp2[b[i]],cnt);
     }
  //  for every element, find the longest run
 ll ans = 1;
  for(auto e: elements){
     ans = max(ans,mp1[e]+mp2[e]);
  }

  cout<<ans<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
