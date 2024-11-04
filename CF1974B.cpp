#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t ;
     while(t--){
          int n;
          cin>>n;
          string s;
          cin>>s;
          string r;
          set<char>st;

          for(int i=0;i<n;i++){
               st.insert(s[i]);
          }
          for(auto i: st){
              r.push_back(i);
          }

          map<char, char>mp;
          for(int i=0;i<r.size();i++){
          mp[r[i]]=r[r.size()-i-1],mp[r[r.size()-i-1]]=r[i];
          }
          for(int i=0;i<n;i++){
               cout<<mp[s[i]];

          }
          cout<<endl;
     }
     return 0;
}
