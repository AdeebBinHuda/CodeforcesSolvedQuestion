#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
      cin>>t;
      while(t--){
     int n;
     cin>>n;
     string a;
     cin>>a;
     int m;
     cin>>m;
     string b,c;
     cin>>b>>c;

    deque<char>ans(a.begin(),a.end());
          for(int i=0;i<m;i++){
               if(c[i]=='D'){
                    ans.push_back(b[i]);
               }
               else if(c[i]=='V'){
                   ans.push_front(b[i]);
               }
          }

     for(char ch: ans){
          cout<<ch;
     }cout<<endl;
      }
     return 0;
}
