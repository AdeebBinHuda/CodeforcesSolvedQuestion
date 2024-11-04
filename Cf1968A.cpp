#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
          int x,s=0;
          cin>>x;
          for(int i=1;i<x;i++){  //divisor
               for(int j=i;j<x;j++){  //y----->second number
                    if(x%i==0 && j%i==0){
                         s=j;
                    }
               }
          }
          cout<<s<<'\n';
     }
     return 0;
}
