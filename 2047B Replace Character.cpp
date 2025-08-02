#include<bits/stdc++.h>
using namespace std;

void minimize_permotation(int t){
     while(t--)
    {
      int n;cin>>n;
      string s;
      cin >> s;
      map<char ,int> m;
      for ( int i = 0; i < s.size(); i++)
      {
        m[s[i]]++;
      }
      int mx=0,mn=INT_MAX;
      char x,y;
      for (auto it : m)
      {
        if (mx<it.second)
        {
          mx=it.second;
          x=it.first;
        }
        if (mn>=it.second)
        {
          mn=it.second;
          y=it.first;
        }
      }
      // cout<<x<<" "<<y<<endl;
      for (int i = 0; i < s.size(); i++)
      {
        if (s[i]==y)
        {
          s[i]=x;
          break;
        }

      }

      cout << s<<"\n";


    }
}
int main(){
    int t;
    cin>>t;
    minimize_permotation(t);
    return 0;
}
