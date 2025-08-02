#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vii;
typedef vector<ll> vll;
typedef long double ld;

#define fi first
#define se second
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
/*
  Let's notice that if k=2,3,5.
 since these are prime numbers, the product of the numbers will be divisible by k.
 if any number in the array is divisible by k.
 From this, we can conclude that it is advantageous to perform operations only on one number.

If k=4,we have several cases, and we need to take the minimum among them. Again, we can perform operations on one number and make it divisible by 4
 or we need to perform operations such that there are two even numbers in the array (there is a special case when n=1
)To have two even numbers, let's count the number of even numbers in the original array as cnt,
and if 2≤n we can say that the answer is max(0,2−cnt)
.
*/
void solve(){
     int n,k;
     cin>>n>>k;
     vector<int>a(n);
     for (int i=0;i<n;i++){
          cin>>a[i];
     }
     int ans= k-1;
     int even_count=0;

     for (int i=0;i<n ;i++ ){
          if(a[i]%2==0)
               even_count++;
          if(a[i]%k == 0)
               ans =0;
          else
               ans = min(ans, k-a[i]%k);
     }

     if(k!=4){
          cout<< ans << endl;
     }
     else{
          if(even_count >= 2)
               cout<<0<<endl;
          else if(even_count ==1){
               cout<<min(ans,1)<<endl;
          }
          else
               cout<<min(2,ans)<<endl;
     }

}
int main(){
    cin.tie(nullptr); cout.tie(nullptr);
    ios::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif

    int t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}
