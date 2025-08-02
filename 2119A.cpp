#pragma GCC optimize(3,"Ofast","inline")
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<queue>
#include<unordered_set>
#include<limits.h>
#include<iomanip>
#include<set>
#include<unordered_map>
using namespace std;
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set1 = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define PI 2.0 * acos(0.0)
#define Dpos(n) fixed << setprecision(n)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> vl;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
const ll MOD = 1e9 + 7;
const ll MAX = 1e18 + 1;
const ll N = 1e5 + 1;
bool cmp(pair<pair<ll, ll>, ll> a, pair<pair<ll, ll>, ll> b)
{
    return a.second < b.second;
}
void solve()
{

   ll a,b,x,y;
   cin>>a>>b>>x>>y;
   ll ans=0;
   if(b-a<-1){
     cout<<-1<<endl;
   }
   else if (b - a == -1 && (a & (1 << 0)) == 1) {
            cout << y << endl;
        }
   else if(b-a==-1){
     cout<<-1<<endl;
   }
   else if(a==b){
     cout<<0<<endl;
   }else{
        if(x<=y){
          cout<<(b-a)*x<<endl;
        }else{
             int res=0;
             for(int i=a;i<b;i++){
               if((i&(1<<0))==0){
                    res += y;
               }else{
                    res+= x;
               }
             }
             cout<<res<<endl;
        }
   }

}
int main()
{
    IOS
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
         solve();
    }
}
