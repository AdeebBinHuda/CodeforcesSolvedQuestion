#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n,f,k;
     cin>>n>>f>>k;
    int a[n];
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     int x= a[f-1];
     sort(a,a+n,greater<int>());
     int k_val = a[k-1];

          if(k_val > x){
               cout<<"NO\n";
          }
          else if (k_val < x){
               cout<<"YES\n";

          }
          else{
              if(k==n || a[k] < x){
               cout<<"YES\n";
              }else{
                 cout<<"MAYBE\n";
              }
          }
}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}




