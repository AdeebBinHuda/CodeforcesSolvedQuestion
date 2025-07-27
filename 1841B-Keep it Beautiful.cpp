#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1841/B
void solve(){
     int n;cin>>n;
     int flag=0,first=-1,last=-1;
     while(n--){
          int num;
          cin>>num;

     if(flag){
          if(num>=last && num <= first){
               last= num;
               cout<<1;
          }
          else{
               cout<<0;
          }
     }
     else{
         if(first==-1){
         first= num;
         last=num;
         cout<<1;
     }
     else if(num>=last){
          last= num;
          cout<<1;
     }
     else if(first>= num){
          last = num;
          flag = 1;
          cout<<1;
      }
     else{
          cout<<0;
      }
     }
   }
   cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
         solve();
    }
    return 0;
}
