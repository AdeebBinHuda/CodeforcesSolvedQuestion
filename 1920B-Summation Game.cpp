#include<bits/stdc++.h>
using namespace std;
void solve(){
     /*
     int n,k,x;
     cin>>n>>k>>x;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     sort(a.begin(),a.end(),greater<int>() );

     for(int i=1;i<=n;i++){
          a[i] += a[i-1];
     }

     int ans = -1e9;
     for(int i=0;i<=k;i++)
          ans= max(ans, a[n]- 2*a[min(i+x,n)]+ a[i]);

     cout<<ans<<"\n";
     */
     int n, k, x;
    cin >> n >> k >> x;

    int A[n + 1] = {};
    for (int i = 1; i <= n; i++)
        cin >> A[i];

    sort(A + 1, A + n + 1, greater<int>());

    for (int i = 1; i <= n; i++)
        A[i] += A[i - 1];

    int ans = -1e9;
    for (int i = 0; i <= k; i++)
        ans = max(ans, A[n] - 2 * A[min(i + x, n)] + A[i]);

    cout<<ans<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
