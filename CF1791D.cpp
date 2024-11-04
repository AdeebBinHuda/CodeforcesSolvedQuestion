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
int cntDistinct(string str)
{

}

void solve()
{
    int n;
    cin>>n;
   // vector<int>freq1(26,0),freq2(26,0);
    string str;
    cin>>str;
    vector<int>freq1(26,0),freq2(26,0);
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        freq2[str[i]-'a']++;
        if(freq2[str[i]-'a']==1){
          sum2++;
        }
    }
   int ans=2;
   for(int i=0;i<n-1;i++){
        freq1[str[i]-'a']++;
        if(freq1[str[i]-'a']==1){
          sum1++;
        }
        freq2[str[i]-'a']--;
        if(freq2[str[i]-'a']==0){
          sum2--;
        }
        ans=max(ans,sum1+sum2);
    }
    cout<<ans<<endl;


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

