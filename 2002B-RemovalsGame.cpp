#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<int>a(n+1);
     for(int i=1;i<=n;i++){
          cin>>a[i];
     }
     vector<int>b(n+1);
     for(int i=1;i<=n;i++){
          cin>>b[i];
     }
     int flag=1,f=1;
     for(int i=1,j=n;i<=n;i++,j--){
          if(a[i]!=b[i]) flag=0;
          if(a[i]!=b[j]) f=0;
     }
     if(f||flag)  cout<<"Bob\n";
     else cout<<"Alice\n";
    }
    return 0;
}
