#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     cin>>n;
     int ans[2][n];
     int h=2*n;
     int l=1;
      ans[0][0]=h--;
      ans[1][n-1]=h--;
     for(int i=0;i<n-1;i++){
          if(i&1){
               ans[0][i+1]=h--;
               ans[1][i]=h--;
          }else{
               ans[1][i] = l++;
               ans [0][i+1] = l++;
          }
     }
     for(int i=0;i<n;i++)
          cout<<ans[0][i]<<' ';
     cout<< '\n';
     for(int i=0;i<n;i++)
          cout<<ans[1][i]<<' ';
     cout<< '\n';

}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
