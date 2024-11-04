#include<bits/stdc++.h>
using namespace std;
int main(){
     //codeforces.com/contest/1914/problem/A
     int t;
     cin>>t;
     while(t--){
          int n;
          string s;
          cin>>n>>s;
          vector<int> counts(26,0);
          for(char c:s){
               counts[c-'A']++;
          }

     int good_chars=0;
     for(int j=0;j<26;j++){
          if(counts[j]>=j+1){
               good_chars++;
          }
     }
     cout<<good_chars<<endl;
     }
     return 0;
}
