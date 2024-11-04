#include <bits/stdc++.h>
#define int  long long
#define pb push_back
#define F first
#define S second
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define answer cout << ans1 << "\n"
#define db long double
using namespace std;
int  n,m,a,b,c,w,ans2=1,sum,ans1=0,h,d,maxi=0,mini=0,k,x,y,z;
int mod=1e9+7,mod2=998244353,T=0;
bool f=0;
string s,t;
char cc;


const int N=200+3e5;


void solve()
{
  int n,q;
  cin>>n>>q;
  vector<int>pre(n+1,0),a(n+1,0);

  int totalsum=0;
  for(int i=1;i<=n;i++){
     cin>>a[i];
     totalsum+=a[i];
     pre[i]=a[i]+pre[i-1];
  }
  //int l,r,k;

     while(q--){
          totalsum=pre[n];
            int l,r,k;
     cin>>l>>r>>k;

  totalsum -=pre[r]- pre[l-1];
  totalsum+=(l-r+1)*k;


  if(totalsum&1)
     cout<<"YES\n";

  else
     cout<<"NO\n";

 }
}

signed main(){
  ios_base::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
 int tt=1;
 //codeforces.com/contest/1807/problem/D
  cin >> tt;
  while(tt--)
  {
    solve();
  }
  return 0;
}



