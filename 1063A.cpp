#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    /*Palindromic substrings primarily depend on repeated characters in proximity.
      Sorting ensures that identical characters are grouped together, potentially
      increasing the number of palindromic substrings (e.g., single-character
     substrings and longer palindromes)*/
    sort(s.begin(),s.end());
    /*A more sophisticated algorithm would rearrange the string into a
      palindrome-friendly structure*/
    cout<<s<<'\n';
    return 0;
}
