#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    cin>>t;
    while(t--){
     long long n,ans=0,cnt=1;
     cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++)
     cin>>a[i];
     sort(a.begin(),a.end());

    for(int i=0;i<n;i++){
     if(cnt > a[i])
          continue;
     ans += a[i]-cnt;
     cnt++;
    }
    cout<<ans<<endl;
    }

}
