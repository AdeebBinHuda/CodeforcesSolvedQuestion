#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     if(n==3){
          cout<<"NO\n";
     }
     else if(n%2!=0){
          cout<<"YES\n";
          for(int i=1;i<=n;i++){
               if(i%2==1){
                    cout<<n/2-1<<' ';
               }
               else
                    cout<<-n/2<<' ';
          }
     }
     else{
          cout<<"YES\n";
          for(int i=1;i<=n;i+=2){
               cout<<69<<' '<<-69<<' ';
          }
          cout<<'\n';
      }
    }
    return 0;
}
