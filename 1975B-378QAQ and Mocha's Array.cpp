#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
int a[N];
void solve(){
     int n;
     cin>>n;
     int flag=0;
    // vector<int>a(n);
     for(int i=1;i<=n;i++){
          cin>>a[i];

          if(a[i]==1)
               flag=1;
          }
          if(flag)cout<<"Yes\n";
          else{
               sort(a+1,a+1+n);
               vector<int>b;
               for(int i=2;i<=n;i++){
                    if(a[i]%a[1])
                         b.push_back(a[i]);
               }
               sort(b.begin(),b.end());
               n=b.size();
               for(int j=1;j<n;j++){
                   if(b[j]%b[0]){
                    flag=1;
                    break;
                   }
               }
               if(!flag) cout<<"Yes\n";
               else cout<<"No\n";
          }
     }


int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
