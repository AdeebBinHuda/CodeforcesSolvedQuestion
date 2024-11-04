#include<bits/stdc++.h>
using namespace std;
void solve(){
         int n;
          cin>>n;
          string s;
          cin>>s;
         int len=0;
          for(int i=0;i<n;i++){
              if(s[i]=='B'){
                for(int j=n-1;j>=i;j--){
                  if(s[j]=='B'){
                    cout<<j-i+1<<"\n";
                    return ;
                    }
                  }
               }
            }
     cout<<"0\n";
}


int main(){
     int t;
     cin>>t;
     while(t--){
        solve();
     }

return 0;
}
