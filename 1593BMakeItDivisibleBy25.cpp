#include<bits/stdc++.h>
using namespace std;
int main(){
     //https://codeforces.com/contest/1593/problem/B
    int t;
    cin>>t;
    while(t--){
     string x;
     cin>>x;
     int ctr=0;

     if((x[x.size()-2]=='0'&& x[x.size()-1]=='0')||(x[x.size()-2]=='5'&& x[x.size()-1]=='0')||(x[x.size()-2]=='7'&& x[x.size()-1]=='5')||(x[x.size()-2]=='2'&& x[x.size()-1]=='5')){
          cout<<0<<endl;
          continue;
     }
     bool found5=0;
     bool found0 =0;
     int ctr5 = 9999999999;
     int ctr0 = 9999999999;
     bool lock5=0;
     bool lock0=0;
     for(int i=x.size()-1;i>=0;i--){
          if(found5 && !lock5){
               if(x[i]=='7'||x[i]=='2'){
                    ctr5 = x.size()-(i+2);
                    lock5 =1;
               }
          }
          if(found0 && !lock0){
               if(x[i]=='5'||x[i]=='0'){
                    ctr0 =x.size()-(i+2);
                    lock0=1;
               }
          }
          if(x[i]=='5'){
               found5 =5;
          }
          if(x[i]=='0'){
               found0 = 1;
          }
     }
     cout<<min(ctr0,ctr5)<<endl;
    }
    return 0;
}
