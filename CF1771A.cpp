#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
void solve(){
     //codeforces.com/problemset/problem/1771/A
    int n;
    cin>>n;
    vector<int>arr(n) ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max_Element= *max_element(arr.begin(),arr.end());
    int min_Element= *min_element(arr.begin(),arr.end());

    int max_abs_diff=max_Element-min_Element;

    //count the pair
    /*   int cont=0;
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(abs(arr[i]-arr[j])==max_abs_diff){
                // cout<<arr[i]<<" "<<arr[j]<<endl;
                cont++;
             }
         }
     }*/
     // Count the occurrences of min and max elements
    int min_count = 0, max_count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == min_Element) min_count++;
        if (arr[i] == max_Element) max_count++;
    }

    // Calculate the number of pairs
    int cont = min_count * max_count;
     printf("%d\n", cont);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

