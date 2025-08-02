#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,k,c;
    string s;
    int t;
    cin>>t;
    while(t--){
         cin>>n>>k;
         cin>>s;
         c=0;
         for( i=0;i<n;i++){
            if(s[i]=='1'){
                c++;
            }
         }
         if(c<=k){
            cout<<"Alice\n";
         }else{
            if(2*k>n){
                cout<<"Alice\n";
            }else{
                cout<<"Bob\n";
            }
         }
    }
    return 0;
}