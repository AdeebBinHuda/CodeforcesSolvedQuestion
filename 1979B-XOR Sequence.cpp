#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
     int x,y;
     cin>>x>>y;
     for(int i=0;i<30;i++){
          if((x &(1<<i))!=(y&(1<<i))){
               cout<<(1ll<<i)<<"\n";
               break;
          }
     }
    }
    return 0;
}
