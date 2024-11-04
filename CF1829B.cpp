#include<bits/stdc++.h>
using namespace std;
int main(){
//codeforces.com/contest/1829/problem/B
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<int>a(n);
     for(auto& i:a){
          cin>>i;
     }

    int cnt=0,ans=0;

        for(int i=0;i<n;i++){
          if(a[i]==0){
               cnt++;
             }
             else{
               ans=max(ans,cnt);
               cnt=0;
             }
        }
        cout<<max(ans,cnt)<<endl;


    }
    return 0;
}
