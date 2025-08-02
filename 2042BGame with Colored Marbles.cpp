#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
     int n;
     cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
          cin>>arr[i];
          --arr[i];
     }
     vector<int>cnt(n);
     for(auto x:arr)
          cnt[x]++;


     int  exactly1 = 0, morethan1=0;
     for(auto x: cnt)
          if(x==1)
               exactly1++;
          else if(x>1)
               morethan1++;

     // cout<< morethen1+((exactly1+1)/2*2)<<endl;
     printf("%d\n", morethan1 + (exactly1 + 1) / 2 * 2);
    }
    return 0;
}
