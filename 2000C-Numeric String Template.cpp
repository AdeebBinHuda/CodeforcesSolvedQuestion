#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     int m;
     cin>>m;
     while(m--){

         string s;
         cin>>s;
         if(s.size()!=n) {
          cout<<"NO"<<'\n';
          continue;
         }
          //two map for bidirectional mapping
         unordered_map<char,int>charToNum;
         unordered_map<int,char>numToChar;
         bool isValid= true;
         //check the mapping concistency
          for(int i=0;i<n;i++){
               char ch=s[i];
               int num= a[i];
        // If `ch` is not in `charToNum`, map it to `num`
           if(charToNum.find(ch)== charToNum.end()){
               if(numToChar.find(num)!=numToChar.end()&& numToChar[num]!=ch){
                    isValid =false;
                    break;
               }
               charToNum[ch]=num;
               numToChar[num]=ch;

           }else{
           if(charToNum[ch]!= num){
               isValid= false;
               break;
           }
          }
         }
         if(isValid){
          cout<<"YES"<<'\n';
         }else{
              cout<<"NO"<<'\n';
         }
     }

    }
    return 0;
}
