/*#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t; // Number of test cases

    vector<int> required = {0, 0, 0, 1, 2, 2, 3, 5}; // Required digits sorted

    while (t--) {
        int n;
        cin >> n;
        vector<int> dig(n);

        for (int i = 0; i < n; i++) cin >> dig[i];

        vector<int> f(10, 0); // Count occurrences of digits (0-9)
        vector<int> needed_f(10, 0); // Required frequency of each digit

        // Fill the required frequency map
        for (int dig : required) needed_f[dig]++;

        int found = 0; // How many required digits we fully matched
        int needed = required.size(); // Total required digits count

        for (int i = 0; i < n; i++) {
            int d = dig[i];

            // If d is required and not yet fully collected
            if (f[d] < needed_f[d]) {
                f[d]++;
                found++;
            }

            // Stop as soon as we have all needed digits
            if (found == needed) {
                cout << i + 1 << endl;
                goto next_case;
            }
        }

        cout << "0" << endl; // If date cannot be formed

    next_case:;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
const int maxn=100;
int a[maxn],cnt[maxn];
void solve(){

     for(int j=0;j<10;j++)
          cnt[j]=0;

     int n;
     cin>>n;
     for(int j=0;j<n;j++){
          cin>>a[j];
     }
     bool f=false;
     for(int j=0;j<n;j++){
          cnt[a[j]]++;
          if(cnt[0]>=3&& cnt[1]>=1 && cnt[2]>=2&& cnt[3]>=1 && cnt[5]>=1  ){
             f= true;
             cout<< j+1<<endl;
             break;
          }
     }
     if(!f) cout<<0<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
