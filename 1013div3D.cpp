#include<bits/stdc++.h>
using namespace std;
bool canArrange(int n,int m,int k,int maxLength){
     int totalDsk =0;
     for(int i=0;i<n;++i){
          totalDsk+=min(k,maxLength);
          k -= min(k,maxLength);
          if(k<=0) break;
     }
     return k <= 0; // If all desks are arranged
}
void solve(){
     int t;
     cin>>t;
     while(t--){
          int n,m,k;
          cin>>n>>m>>k;

          int low=1,high=m,result=k;

          while(low<=high){
               int mid= (low+high)/2;
               // Check if it's possible to arrange desks such that no bench is longer than `mid`
                if(canArrange(n,m,k,mid)){
                   result = mid;
                   high= mid-1;
                }else{
                     low = mid+1;
                }
          }
          cout<<result<<endl;
     }
}
int main(){
    solve();
    return 0;
}
