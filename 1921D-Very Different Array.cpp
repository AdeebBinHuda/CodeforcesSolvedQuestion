#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
     int n,m,i;

     cin>>n>>m;
     vector<int>a(n),b(m);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     sort(a.begin(),a.end());  //sort a array
      for(int i=0;i<m;i++){
        cin>>b[i];
     }
    sort(b.begin(),b.end());//sort b arr

    int l = 0;   //arr a first
    int k = n-1;  //arr a last
    int s = 0;     //arr b first
    int e = m-1;   //arr b last
    ll ans = 0;
    while(l<=k){
     if(abs(a[l]-b[e])>= abs(a[k]-b[s])){// if abs a[first]-b[last] >= abs a[last]-b[first]
          ans += abs(a[l]-b[e]);   //if true ans=abs a[first]-b[last]
          l++;
          e--;
     }
     else{
          ans+=abs(a[k]-b[s]);   //or  ans=  abs a[last]-b[first]
          k--;
          s++;
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
