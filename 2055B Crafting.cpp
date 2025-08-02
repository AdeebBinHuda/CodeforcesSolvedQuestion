#include<bits/stdc++.h>
using namespace std;
void solve(){
      int t;
    cin>>t;
    while(t--){

    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);

    for(int i=0;i<n;i++) {
     cin>>a[i];
    }
    for(int i=0;i<n;i++) {
     cin>>b[i];
    }

    int cnt =0;
    for(int i=0;i<n;i++){
     if(a[i]<b[i]){
          cnt++;
     }
    }
    if(cnt>1){
     cout<<"NO"<<"\n";
     continue;
    }

     bool possible= true;
    int d=0;
    for(int i=0;i<n;i++)
    {
         if(a[i]<b[i]){
          d = b[i]-a[i];
          break;   //because I have one cnt or  value
         }
    }

    for(int i=0;i<n;i++){
     if(a[i]>= b[i]){
          if( a[i] - b[i] < d ){
               possible= false;
               break;
          }
     }
    }
    if(possible){
     cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;
    }

}
}
int main(){
   solve();
    return 0;
}
