#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int l=1,r=n;
    for(int i=1;i<=n;i++){
     if(i&1){
          cout<<l<<" ";
          l++;
     }
     else{
          cout<<r<<" ";
          r--;
     }
    }
    cout<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
