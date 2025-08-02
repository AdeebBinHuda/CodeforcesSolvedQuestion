#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n,x;
     cin>>n>>x;
     int s=0;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s+=x;
     }
     if(n*x==s){
          cout<<"YES"<<endl;
     }
     else{
          cout<<"NO"<<endl;
     }
    }
    return 0;+
}
