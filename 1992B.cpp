#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     vector<int>even;
     vector<int>odd;
     for(auto i:a){
          if(i%2!=0)
               odd.push_back(i);
          else
          even.push_back(i);
     }

     if(odd.size()==0 || even.size()==0){
          cout<<"0"<<endl;
          return;
     }
     sort(odd.begin(),odd.end());
     sort(even.begin(),even.end());

     int maxm= odd.back();
     int ans=even.size();
     for(auto i:even){
          if(i>maxm){
               ans++;
               break;
          }
          maxm +=i;
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
