#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
     ll n;
     cin>>n;
      vector<int>arr(n);
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      sort(arr.begin(),arr.end());
      ll cunt=0;
      for(int i=0;i<n-1;i++){
          for(int j=i+1;j<n;j++){
               if(arr[i]==arr[j]){
                    cunt+=1;
                    i++;
                    break;
               }
          }
      }
      cout<<cunt<<endl;
    }
    return 0;
}
