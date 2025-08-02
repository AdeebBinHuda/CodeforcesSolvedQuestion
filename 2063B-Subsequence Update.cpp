#include<bits/stdc++.h>
using namespace std;

#define int long long int
void solve(){
     int n,l,r;
     cin>>n>>l>>r;
     l--;
     r--;

     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }

     vector<int>x;
     for(int i=0;i<=r;i++){
          x.push_back(a[i]);
     }

     vector<int>y;
     for(int i=l;i<n;i++){
          y.push_back(a[i]);
     }

     sort(x.begin(),x.end());
     sort(y.begin(),y.end());

     int k= r-l+1;
     int s1=0,s2=0;
     for(int i=0;i<k;i++){
          s1+=x[i];
          s2+=y[i];
     }

     cout<<min(s1,s2)<<endl;
}
signed main(){
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
