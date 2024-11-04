#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     int pos=0;
     for(int i=1;i<=n;i++){
         if(a[i]>a[i+1])
         {
              pos=i;
              break;
         }
     }
     if(!pos) cout<<"Yes\n";
     else{
          int flag=0;
          for(int i=pos+1;i<=n;i++){
               int j=(i%n)+1;
               if(a[i]>a[j]) flag=1;
          }
          if(!flag) cout<<"YES\n";
          else cout<<"No\n";
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
