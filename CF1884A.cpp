#include<bits/stdc++.h>
using namespace std;

int main()
{
     //codeforces.com/problemset/problem/1884/A
  int t;
  cin>>t;
  while(t--)
  {
    long long x,k;
    cin>>x>>k;

    int flag=1;
    while(flag)
    {
      long long temp=x;
      long long sum=0;
      while(temp>0)
      {

        sum+= temp%10;
        temp=temp/10;
      }
      if(sum%k==0)
      {
        break;
      }
      x++;
    }
    cout<<x<<endl;


  }
}
