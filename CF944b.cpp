#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=1;i<n;i++){
     if(s[i]!=s[i-1]){
          swap(s[i],s[i-1]);
          cout<<"YES\n"<<s<<endl;
          return;
     }
    }
    cout<<"NO\n";
}
int main(){
     //codeforces.com/contest/1971/problem/B
     int t;
     cin>>t;
     while(t--){
          solve();
     }

return 0;
}
