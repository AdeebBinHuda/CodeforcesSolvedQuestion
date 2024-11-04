#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*int main(){
    int t;
    cin>>t;
    while(t--){
     ll n,k;
     cin>>n>>k;
      vector<ll> a(n), b(n);
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }

     for(int i=0;i<n;i++){
          cin>>b[i];
     }
    // sort(b,b+n);

          int l=0;
          int r=n-1;
          while(l<n && r>=0){
          if(abs(a[l]-b[r])<=k){
               cout<<a[l]-b[r]<<' ';


          }
          if(abs(a[l]-b[r])>k) r--;
          else l++;
          }

     }
    return 0;
}*/
int main(){
   int t;
   cin>>t;
   while(t--){
     int n,k;
     cin>>n>>k;
     vector<pair<int,int>>a(n);
     vector<int>b(n),ans(n);
     for(int i=0;i<n;i++){
          cin>>a[i].first;
          a[i].second=i;
     }
     for(auto &i:b)
          cin>>i;
     sort(b.begin(),b.end());
     sort(a.begin(),a.end());

     for(int i=0;i<n;i++){
          ans[a[i].second]=b[i];
     }
     for(auto &i: ans) cout<<i<<' ';
     cout<<endl;
   }
}


