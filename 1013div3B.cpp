/*#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n,x;
     cin>>n>>x;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     sort(a.begin(),a.end());
     int team=0;
     int t_s=0;

     for(int i=n-1;i>=0;i--){
          t_s++;
          if(t_s*a[i]>=x){
               team++;
               t_s=0;
          }
     }
     cout<<team<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int n,x,a[maxn];
int findAns(){
     sort(a,a+n);
     int res=0,cnt=0;
     for(int j=n-1;j>=0;j--){
          cnt++;
          if(a[j]*cnt>=x){
               res++;
               cnt=0;
          }
     }
     return res;
}
int main(){
    int t;
    cin>>t ;
    while(t--){

     cin>>n>>x;
     for(int i=0;i<n;i++)
          cin>>a[i];
          cout<<findAns()<<endl;

    }
    return 0;
}
