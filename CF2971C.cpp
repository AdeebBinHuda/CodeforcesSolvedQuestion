#include<bits/stdc++.h>
using namespace std;
int main(){
     //codeforces.com/problemset/problem/1971/C
     int t;
     cin>>t;
     while(t--){
          int a,b,c,d;
          cin>>a>>b>>c>>d;
          string ans;
          for(int i=1;i<=12;i++){
               if(i==a || i==b)ans+='0';
               if(i==c || i==d)ans+='1';
          }
          if(ans=="1010"|| ans=="0101"){
               cout<<"YES"<<endl;
          }
          else{
               cout<<"NO"<<endl;
          }
     }
     return 0;
}
