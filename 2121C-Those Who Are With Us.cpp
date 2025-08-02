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
   ll n,m;
   cin>>n>>m;
   ll arr[n+10][m+10];
   map<ll,ll>mp,mp1,mp2;
   ll max1=0;

   for(int i=1;i<=n;i++){
     for(int j=1;j<=m;j++){
          cin>>arr[i][j];
          max1= max(arr[i][j],max1);
          mp[arr[i][j]]++;
     }
   }

   for(int i=1;i<=n;i++){
       ll cnt=0;
       for(int j=1;j<=m;j++){
          if(arr[i][j]==max1){
               cnt++;
          }
       }
       mp1[i]=cnt;
   }

   for(int j=1;j<=m;j++){
     ll cnt=0;
     for(int i=1;i<=n;i++){
          if(arr[i][j]==max1){
               cnt++;
          }
      }
      mp2[j]=cnt;
   }
   int f=0;
   for(int i=1;i<=n;i++){
     for(int j=1;j<=m;j++){
          ll ans= mp1[i]+mp2[j];
          if(arr[i][j]==max1){
               ans--;
          }if(ans == mp[max1]){
              f=1;
              break;
          }
     }
     if(f){
          break;
     }
   }

   if(f)
   {
        cout<<max1-1<<endl;
   }
   else
   {
        cout<<max1<<endl;
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
