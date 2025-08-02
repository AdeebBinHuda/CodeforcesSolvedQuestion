#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
      int flag=0;
      for(int i=0;i<n;i++){
          if(arr[i]<=(2*max(i,n-1-i))){
            flag=1;
            break;
             }
      }
      if(flag)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
    return 0;
}
