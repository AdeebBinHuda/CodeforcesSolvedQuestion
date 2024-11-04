#include<bits/stdc++.h>
using namespace std;
//codeforces.com/problemset/problem/1950/B
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;

     for(int i=0;i<2*n;i++){
          for(int j=0;j<2*n;j++){
               int sum=i/2+j/2;
               if(sum%2==1){
                    cout<<".";
               }
               else{
                    cout<<"#";
               }
          }
          cout<<endl;
     }
    }
    return 0;
}
