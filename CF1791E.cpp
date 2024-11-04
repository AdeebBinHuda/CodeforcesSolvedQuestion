#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define answer cout << ans1 << "\n"
#define db long double
using namespace std;
ll tt=1,n,m,a,b,c,w,ans2=1,sum,ans1=0,h,d,maxi=0,mini=0,k,x,y,z;
ll mod=1e9+7,mod2=998244353,T=0;
bool f=0;
string s,t;
char cc;


const ll N=200+3e5;


void solve()
{
  int n;
  cin>>n;
  vector<int>a(n);
  ll sum=0;
  int neg=0;
  for(int i=0;i<n;i++){
     cin>>a[i];
     if(a[i]<0){
          neg++;
          a[i]=-a[i];
     }
     sum+=a[i];
  }
  sort(a.begin(),a.end());


     if(neg&1==1)
          sum-=2*a[0];
  cout<<sum<<endl;
}

int main(){
  ios_base::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
  cin >> tt;
  //codeforces.com/contest/1791/problem/E
  while(tt--)
  {
    solve();
  }
  return 0;
}

