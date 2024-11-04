#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }

    int pref_max=0,s=0,mx=0;
     for(int i=0;i<n;i++){
         pref_max= max(pref_max,a[i]);

         int d = pref_max - a[i];
         s += d;

         mx= max(mx,d);

          }
          cout<<s+mx<<endl;
     }


    return 0;
}
