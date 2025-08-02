#include<bits/stdc++.h>
using namespace std;
void permutation(int n, int k){
     int cnt =n/k;
     for(int i=1;i<=n;i++){
               //If i % k != 0, it increases cnt and prints it.
               //If i % k == 0, it prints i / k.
          cout<<(i%k?cnt++:i/k)<<" \n"[i==n];//"\n"[i == n] ensures that a newline is printed only at the end of the output.
     }
}
//https://codeforces.com/problemset/problem/2048/B
/*void permutation(int n,int k){
     vector<int>result;
     //We create the permutation by placing the last n-k+1 numbers first in increasing order.
     for(int i= n-k+1;i<=n;i++){
          result.push_back(i);
     }
      //We then place the first k-1 numbers in decreasing order.
     for(int i=1;i<=n-k;i++){
          result.push_back(i);
     }

     for(int num:result){
          cout<<num<<' ';
     }
     cout<<endl;
}*/
int main(){
    int t;
    cin>>t;
    while(t--){
          int n,k,cnt;
    cin>>n>>k;
     cnt =n/k;
     for(int i=1;i<=n;++i){
               //If i % k != 0, it increases cnt and prints it.
               //If i % k == 0, it prints i / k.
          cout<<(i%k?++cnt:i/k)<<" \n"[i==n];//"\n"[i == n] ensures that a newline is printed only at the end of the output.
     }
    }
    return 0;
}
