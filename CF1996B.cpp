#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          string s;
          cin>>s;
          int sum=0;
          for(int i=1;i<n-1;i++){
            if(s[i]='A' && s[i+1]=='B'){

                    sum++;
                    i++;
               }

            }

            //cout<<sum;

           cout<<sum<<'\n';
     }
     return 0;
}
