#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    ll   psum=0;
    while(n--){
     //  ll   pusm=0;
     char c;
     int a;
     cin>>c>>a;
     if(c=='P'){
          psum+=a;
     }
     else{
          if(a>psum){
               psum = 0;
               cout<< "YES\n";
          }
          else {
               psum -=a;
               if(psum<0 ) psum=0;
               cout<<"NO\n";
          }
     }
    }
    return 0;
}
