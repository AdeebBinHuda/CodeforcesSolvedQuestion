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

    int arr[n+1];
     for(int i=1;i<=n;i++){
          cin>>arr[i];
     }

    bool flag = true;

     for(int i=2;i<n;i++){
          if(arr[i+1]<arr[i] && ((-i)&i) != i){

               flag=false;
               break;
          }
       }
       if(flag) cout<<"YES\n";
       else cout<<"NO\n";

     }

int main(){
  ios_base::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
 //codeforces.com/contest/1891/problem/A
  int t;
  cin >> t;

  while(t--)
  {
    solve();
  }
  return 0;
}

