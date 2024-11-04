#include<bits/stdc++.h>
using namespace std;
int main(){
     //codeforces.com/contest/1954/problem/A
     int t;
     cin>>t;
     while(t--){
          int n,m,k;
          cin>>n>>m>>k;

        int  maxcolor=(n+m-1)/m;
        if(maxcolor+k>=n){
          cout<<"nO"<<endl;
        }
        else{
          cout<<"yEs"<<endl;
        }
     }
     return 0;
}
