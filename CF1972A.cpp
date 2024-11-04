#include<bits/stdc++.h>
using namespace std;
const int N=105;
int main(){
     int t;
     cin>>t;
     while(t--){

          int n;
          cin>>n;
          int a[N],b[N];
          for(int i=0;i<n;++i){
               cin>>a[i];
          }
          for(int i=0;i<n;++i){
               cin>>b[i];
          }
          int diff=0,ans=0;
          for(int i=0;i<n;i++){
          if(a[i-diff]>b[i]){
               diff++;
               ans++;
          }
     }
     cout<<ans<<endl;
     }
     return 0;
}
