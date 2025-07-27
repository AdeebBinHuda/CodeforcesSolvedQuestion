#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n,k;
     cin>>n>>k;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
          a[i]--;
     }
     int bad=0;
     for(int i=0;i<n;i++){
          if(a[i]%k!=i%k){
               bad++;
          }
     }
     if(bad==0)
          cout<<0<<'\n';

     else if(bad==2)
          cout<<1<<'\n';

     else
          cout<<-1<<'\n';
}
int main(){
     //https://codeforces.com/problemset/problem/1823/B
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
