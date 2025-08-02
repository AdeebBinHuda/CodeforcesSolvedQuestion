#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        long long n, k;
        cin >> n >> k;

        if(n == 1){
            // Only possible if k==1
            if(k == 1){
                cout << 1 << "\n" << 1 << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
        else if(k == 1 || k == n){
            // impossible when n>1 but k at extreme
            cout << -1 << "\n";
        }
        else {
            // always possible with m = 3
            cout << 3 << "\n";
            if(k % 2 == 0){
                // k even
                // p = [1, k, k+1]
                cout << 1 << " " << k << " " << (k+1) << "\n";
            } else {
                // k odd (and k>=3 because k>1 and odd)
                // p = [1, k-1, k+2]
                cout << 1 << " " << (k-1) << " " << (k+2) << "\n";
            }
        }
    }
    return 0;
}
