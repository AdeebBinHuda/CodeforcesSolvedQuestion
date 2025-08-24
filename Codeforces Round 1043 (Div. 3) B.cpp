#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     ll t;
     cin>>t;

     while(t--){
     unsigned  ll n;
       cin>>n;

        vector<unsigned ll>ans;

        unsigned ll p = 10;
          while(true){
               unsigned ll d= p+1;
               if(d>n) break;

               if(n%d ==0){
                    ans.push_back(n/d);
               }

               if(p>ULLONG_MAX/10) break;
               p *=10;
          }

        if(ans.empty()){
          cout<<0<<'\n';
        }
        else{
               sort(ans.begin(),ans.end());
          cout<<ans.size()<<"\n";
          for(size_t i=0;i<ans.size();++i){
               if(i) cout<<' ';
               cout<<ans[i];
          }
             cout<<"\n";

        }
     }
     return 0;
}

