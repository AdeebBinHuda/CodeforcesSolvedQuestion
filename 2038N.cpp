#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
       string s;
       cin>>s;
       int a,b;
       a=s[0]-'0';
       b=s[2]-'0';
       char c;
       if(a>b){
          c='>';
       }
       else if(a<b){
          c='<';
       }
       else {
          c='=';
       }
       cout<<a<<c<<b<<'\n';

    }
    return 0;
}
