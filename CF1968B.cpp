#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
          int n,m;
          cin>>n>>m;
          vector<char>a(n);
          vector<char> b(m);
          for(int i=0;i<n;i++){
               cin>>a[i];
          }
          for(int j=0;j<m;j++){
               cin>>b[j];
          }
          int cunt =0 ; //count

          /*for(int i=0;i<a;i++){
               for(int j=i;j<b;j++){
                    if(a[i]==b[j]){
                         j++;
                    }
                    cout<<j;
               }
          }*/
          for(char cc:b){
               if(cc==a[cunt] && cunt<n){
                    cunt++;
               }
          }
          cout<<cunt<<endl;
     }
     return 0;
}
