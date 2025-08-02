
#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
if(n%2==0){
     cout<<"-1"<<endl;
     return;
}
long long i;
for(i=n;i>=1;i--){
     cout<<i;
     if(i!=1){
          printf(" ");
     }else{
     printf("\n");
     }
}
}
int main(){
    int t;cin>>t;
    while(t--){
     solve();
    }
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
void solve(){

     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;


          if(n==2 || n==4){
               cout<<"-1"<<endl;
               continue;
          }

          vector<int>permotation(n);
         for(int i=0;i<n;i++){
          permotation[i]=i+1;  // Fill array sequentially
         }

        //swap adjacent
        for(int i=0;i<n-1;i+=2){
          swap(permotation[i],permotation[i+1]);
        }

        //print the permotation
         for(int i=0;i<n;i++){
          cout<<permotation[i]<<" ";// Print without space after last element
        // Add space after each element except the last
         }
         cout<<endl;
     }
}
int main(){
      ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}*/
/*#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1"<<endl;
        return;
    }

    if (n % 2 == 0) {
        cout << "-1"<<endl;
        return;
    }

    vector<int> res;
    int left = n / 2;
    int right = left + 2;
    res.push_back(left + 1);

    for (int i = 1; i <= n / 2; ++i) {
        res.push_back(left);
        res.push_back(right);
        left--;
        right++;
    }

    for (int num : res) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
*/
