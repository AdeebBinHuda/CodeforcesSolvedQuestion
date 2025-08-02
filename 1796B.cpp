#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*void solve(){
     ll f,i,j,n,m;
     string a,b;
     f=0;
     cin>>a;
     cin>>b;
     n = a.size();
     m = b.size();

     if(a[0]==b[0]){
          cout<<"YES\n";
          cout<<a[0]<<"*\n";
          continue;
     }
     else if(a[n-1]==b[m-1]){
          cout<<"YES\n";
          cout<<"*"<<a[n-1]<<"\n";
          continue;
     }

     for(i = 0; i < n-1 ; i++){
          for(j = 0; j< m-1 ; j++){
               if( a[i]==b[j] && a[i+1]==b[j]+1){
                    f=1;
                    break;
               }
          }
          if(f==1)
               break;
     }
     if(f==1){
          cout<<"YES\n";
          cout<<"*"<<a[i]<<a[i+1]<<"*\n";
     }
     else
          cout<<"NO\n";

}*/

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    ll t, f, i, j, n, m;
    string a,b;
    cin>>t;
    while(t--){

     f=0;
     cin>>a;
     cin>>b;
     n = a.size();
     m = b.size();

     if(a[0]==b[0]){
          cout<<"YES\n";
          cout<<a[0]<<"*\n";
          continue;
     }
     else if(a[n-1]==b[m-1]){
          cout<<"YES\n";
          cout<<"*"<<a[n-1]<<"\n";
          continue;
     }

     for(i = 0; i < n-1 ; i++){
          for(j = 0; j< m-1 ; j++){
               if( a[i]==b[j] && a[i+1]==b[j+1]){
                    f=1;
                    break;
               }
          }
          if(f==1)
               break;
     }
     if(f==1){
          cout<<"YES\n";
          cout<<"*"<<a[i]<<a[i+1]<<"*\n";
     }
     else
          cout<<"NO\n";

    }
    return 0;
}
