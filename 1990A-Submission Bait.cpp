#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int mx=0;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     map<ll,ll>hm; // Map to store the count of each element
     for(auto &i: a){
          hm[i]++;
     }
     //flag to check if any odd occurrence exists;
     bool hasOdd = false;

     for(auto i:hm){
          if(i.second%2!=0){
               hasOdd = true;// Set the flag if an odd count is found
               break;// No need to check further
          }
     }
      // Print the result based on the flag
      if(hasOdd){
          cout<<"YES"<<'\n';
      }else{
           cout<<"NO"<<'\n';
      }

    }
    return 0;
}
