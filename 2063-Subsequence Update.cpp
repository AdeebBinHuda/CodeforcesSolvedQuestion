#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,l,r;
    cin>>n>>l>>r;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr+l-1,arr+r);


    long long sum=0;
    for(int i=l-1;i<r;i++){
     sum=sum+arr[i];
    }
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
