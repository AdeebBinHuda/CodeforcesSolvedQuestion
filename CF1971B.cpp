#include<bits/stdc++.h>
#include<algorithm>

//codeforces/problem/1971/A
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
               string s;
          cin>>s;
        bool ok=false;

        for(int i=1;i<(int)(s.length());i++){
          if(s[i]!=s[0]){
               swap(s[i],s[0]);
               ok=true;
               break;
          }
        }
          if(!ok){
               cout<<"NO\n";
          }
          else{
          cout<<"YES\n";
          cout<<s<<'\n';
          }
     }
     return 0;
}

