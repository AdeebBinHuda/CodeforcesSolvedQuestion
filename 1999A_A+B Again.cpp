#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int n1=0,n2=0;
     n1=n%10;
     n2=n/10;
     cout<<n1+n2<<'\n';
    }
    return 0;
}
