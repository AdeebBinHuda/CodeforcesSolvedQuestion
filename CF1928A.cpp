#include<bits/stdc++.h>
using namespace std;
int main(){
     //codeforces.com/problemset/problem/1928/A
     int t;
     cin>>t;

     while(t--){
       int a,b;
       cin>>a>>b;
        if(a>b){
          swap(a,b);
        }
        if(((a%2==1) && (b%2==1)) || ((a%2==1) && (b==2*a))){
          cout<<"NO\n";
        }else{
        cout<<"YES\n";
        }
     }
     return 0;
}
