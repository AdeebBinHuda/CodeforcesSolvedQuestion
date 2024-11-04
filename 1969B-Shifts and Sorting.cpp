#include<bits/stdc++.h>
using namespace std;
void solve(){
     string s;
     cin>>s;
     long long rem=0,ans=0,n=s.size();// cont= count

     for(long long i=0;i<n;i++){
          if(s[i]=='1'){
               rem++;
          }else{
               if(rem>0)
                    ans+=(rem+1);
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
