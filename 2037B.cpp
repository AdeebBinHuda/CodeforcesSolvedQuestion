#include<bits/stdc++.h>
using namespace std;
void solve(){
     int k;
     cin>>k;
     vector<int>a(k);
     for(int i=0;i<k;i++){
          cin>>a[i];
     }

     int i=0,j=k-1;
     sort(a.begin(),a.end());
     int f=1;
     while(i<j && f){
          if(a[i]*a[j]==k-2) f=0;
          else if(a[i]*a[j]>k-2) j--;
          else i++;
     }
     cout<<a[i]<<' '<<a[j]<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
