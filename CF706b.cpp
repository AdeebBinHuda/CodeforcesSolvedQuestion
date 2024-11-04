
#include <bits/stdc++.h>
using namespace std;

/*int main() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int q;
    cin >> q;
     vector<int>budgets(q);
    for (int i = 0; i < q; ++i) {
        cin >> budgets[i];
    }

     vector<int>result(q);
     for(int i=0;i<q;i++){
          int budget=budgets[i];

          int l=0,h=n-1,mid;
          while(l<=h){
               mid=(l+h)/2;
               if(prices[mid] <= budget){
                    l=mid+1;
               }else{
                    h=mid-1;
               }
          }
          result[i]=l;
     }
      for (int i = 0; i < q; ++i) {
        cout << result[i] << endl;
    }
    return 0;
}*/
int main(){
     int n;
     cin>>n;
     vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    sort(prices.begin(),prices.end());

    int q;
    cin>>q;
    for(int i=0;i<q;i++){
         long long coins;
         cin>>coins;
      int index=upper_bound(prices.begin(),prices.end(),coins)-prices.begin();
      cout<<index<<endl;;
    }
}

