#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n,num;
     cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;i++)

        cin>>a[i];
        bool res= true;
         for(int i=0;i<n-2;++i){
          num=abs(a[i]);
          a[i] = a[i]-num;
          a[i+1]= a[i+1]-2*num;
          a[i+2]= a[i+2]-num;
         }
         for(int i=0;i < n; ++i)
         if(a[i]!=0)
          res= false;
         if(res)
          cout<<"YES\n";
         else
          cout<<"NO\n";

}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
