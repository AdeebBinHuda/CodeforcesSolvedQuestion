#include<bits/stdc++.h>
using namespace std;
int main(){
     //https://codeforces.com/problemset/problem/2013/B
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;

     vector<int>s(n);
     for(int i=0;i<n;i++){
          cin>>s[i];
     }
    // sort(s.begin(),s.end());
    long long sum=0;
     for(int i=0;i<n;i++){
         sum+=s[i];
     }
     cout<<sum-2*s[n-2]<<endl;
    }
    return 0;
}
