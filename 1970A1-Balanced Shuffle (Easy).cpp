#include<bits/stdc++.h>
using namespace std;
bool comp( pair<int,int>a, pair<int, int >b){
     if(a.first == b.first) return (a.second> b.second);
     return (a.first< b.first);
}
void solve(){
     string st;
     cin>>st;
     vector<pair<int,int>>vp;
     int score=0;

     for(int i=0;i<st.size();i++){
          vp.push_back({score,i});
          if(st[i]=='(') score++;
          else score--;
     }
     sort(vp.begin(),vp.end(),comp);
     for(auto it: vp){
          cout<<st[it.second];
     }cout<<'\n';
}
int main(){
    int t=1;
    while(t--){
          solve();
     }
    return 0;
}
