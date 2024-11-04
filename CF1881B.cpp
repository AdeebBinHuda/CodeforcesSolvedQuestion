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
     vector<ll> v(3);
for (int i = 0;i<3;i++)
     cin>>v[i];
sort(v.begin(),v.end());  //3 6 9
if (v[1]%v[0]>0 || v[2]%v[0]>0){  //
     cout<<"NO"<<endl;
       return;
}
if (v[1]/v[0] + v[2]/v[0]<=5)  //6/3=2+9/3=3 <=5
     {cout<<"YES"<<endl;
return;
}
cout<<"NO"<<endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}


