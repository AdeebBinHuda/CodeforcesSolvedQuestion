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
    string s;
    cin>>s;
    unordered_map<string,int>cur;
    bool found= false;
    for(int i=0;i<n;i++){
     string t= s.substr(i,2);
     if(cur.find(t)!= cur.end()){
          if(cur[t]<i-1){
               cout<<"YES"<<endl;
               found= true;
               break;
          }
     }else{
          cur[t]=i;
     }
    }
    if(!found){
     cout<<"NO"<<endl;
    }

}

int main(){
  ios_base::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
  cin >> tt;
  while(tt--)
  {
    solve();
  }
  return 0;
}




