#include<bits/stdc++.h>
using namespace std;
int main(){

   /* map<int,int>m;
    //key , value
    //key vlaue pair
    vector<int>v{1,2,3,4,3,5,6,2,4,7,1,2,5};
    for(int i=0;i<v.size();i++){
     m[v[i]]++;
    }
   for(auto& i:m){
     cout<<i.first<<" ->  "<<i.second<<endl;
   }
   map<int,char>m;
   vector<char>v{'a','a','b','m','r','t','u','q','w','o','p','z','x'};

   for(int i=0;i<v.size();i++){
     m[v[i]]++;
   }
   for(auto& i:m)
   {
        cout<<(char)i.first<<" -> "<<(int)i.second<<endl;
   }*/
   bitset<32> bset(string("1010101"));
   cout<<bset.to_ullong();

    return 0;
}
