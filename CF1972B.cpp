#include<bits/stdc++.h>
using namespace std;
//Adeeb codeforces   problem-> 1972B
void soluation(){
     int n;
     cin>>n;
     string s;
     cin>>s;

     int  cntU=0;
     for(char c:s)if(c=='U')
          ++cntU;
     if(cntU & 1) cout<<"YES"<<endl;
     else{
          cout<<"NO"<<endl;
     }
     }

main(){
   int t;
   cin>>t;
   while(t--){
     soluation();

   }
   return 0;
}
