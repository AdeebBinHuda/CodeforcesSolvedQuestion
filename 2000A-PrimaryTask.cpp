#include<bits/stdc++.h>
using namespace std;
void solve(){
string s;
    cin>>s;
    if(s.substr(0,2)!="10"){
     cout<<"NO\n";
     return;
    }
      if(s.size()<3 ||s[2]=='0' || (s.size() == 3 && s[2]=='1')){
     cout<<"NO\n";
       return;
    }
    else{
     cout<<"YES\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
