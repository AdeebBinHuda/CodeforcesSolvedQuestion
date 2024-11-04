#include<iostream>
#include<algorithm>

//codeforces/problem/1971/A
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
          int x,y;
          cin>>x>>y;

          cout<<min(x,y)<<" "<<max(x,y)<<endl;

     }
     return 0;
}
