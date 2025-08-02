#include<bits/stdc++.h>
using namespace std;
#define ll long long
//codeforces.com/problemset/problem/2060/B
void solve(){
     ll n,m;
     cin>>n>>m;
     vector<vector<ll>>v(n,vector<ll>(m));
     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
               cin>>v[i][j];
          }
     }
     // sorting row wise
     for(int i=0;i<n;i++){
          sort(v[i].begin(),v[i].end());
     }

     vector<ll> p(n);
     for(int i=0;i<n;i++){
          p[i] = i+1;
     }
     // bubble sort
     for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
               if(v[i][0]>v[j][0]){
                    swap(v[i],v[j]);
                    swap(p[i],p[j]);
               }
          }
     }

     for(int j=0;j<m;j++){
          for(int i=0;i<n;i++){
             if(v[i][j]!= n*j+i) {
               cout<<-1<<endl;
               return;
             }
          }
     }
     for(int i=0;i<n;i++){
          cout<<p[i]<<' ';
     }
     cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
