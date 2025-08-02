#include<bits/stdc++.h>
using namespace std;
void solve(){
      int n,k,d,w;
    cin>>n>>k>>d>>w;

    vector<int>t(n);
    for(int i=0;i<n;i++){
     cin>>t[i];
    }
    int when= -1;
    int cnt =0;
    int ans= 0;
    for(int i=0; i<n;i++){
     if(t[i]<=when+d && cnt>0){
          cnt -=1;
     }
     else{
          when =t[i] +w;
          cnt = k- 1;
          ans +=1 ;
     }
    }
    cout<<ans<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--){
     solve();
   }
    return 0;
}
