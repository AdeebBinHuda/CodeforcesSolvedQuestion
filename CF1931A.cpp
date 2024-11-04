#include<bits/stdc++.h>
#include<string>
using namespace std;
//codeforces.com/contest/1913/problem/A
void findvalues(string ab){
     int n= ab.length();

          //bool found=false;

          for(int i=0;i<n;i++){
          string a_str= ab.substr(0,i);
          string b_str= ab.substr(i);

          if(a_str[0] !='0' && b_str[0]!= '0' && stoi(b_str) > stoi(a_str)){
               cout<<a_str <<" "<<b_str<<endl;


            }
            else{
               cout<<-1<<endl;
            }
          }
         // if(!found){
         // cout<<-1<<endl;
         // }
     }

int main(){
     int t;
     cin>>t;
     while(t--){
          string ab;
          cin>>ab;
         findvalues(ab);
     }
   return 0;
}
