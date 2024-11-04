#include<bits/stdc++.h>
using namespace std;
int main(){
     //codeforces.com/contest/1974/problem/A
     int t;
     cin>>t;
     while(t--){
          int x,y;
          cin>>x>>y;
          int k=(y+1)/2;
          int r= k*15-4*y;
          int ans=k+max(0,(x-r+14)/15);
          cout<<ans<<endl;

     }
     return 0;
}
