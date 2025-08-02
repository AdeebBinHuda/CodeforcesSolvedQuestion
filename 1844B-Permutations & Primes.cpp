#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     cin>>n;
     vector<int>a(n,0);
     int num=1;
     a[n/2]= num++;
     int i=0, j=n-1;
     while(a[i]!=1 || a[j]!=1){
          if(a[i]!=1)
               a[i++]= num++;
          if(a[j]!=1)
               a[j--]= num++;
     }
     for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
     }
     cout<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
         solve();
    }
    return 0;
}
