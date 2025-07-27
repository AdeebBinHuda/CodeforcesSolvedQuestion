#include<bits/stdc++.h>
using namespace std;
void solve(){
     string s;
     cin>>s;
     int cnt0=0;
     int cnt1=0;
     for(int i=0;i<s.size();i++){
         if(s[i]=='0')
          cnt0++;
         else if(s[i]=='1')
          cnt1++;
     }
     for(int i=0;i<s.size();i++){
          if(cnt0==0 && s[i]=='1') break;
          if(cnt1 == 0 && s[i]=='0')break;

          else{
               if(s[i]== '0')
                    cnt1--;
               else if(s[i]== '1')
                    cnt0--;
          }
     }
     cout<<cnt1+cnt0<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
