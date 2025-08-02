#include<bits/stdc++.h>
using namespace std;
void solve()
{
     int n,c,d;
     cin>>n>>c>>d;
     vector<int>a(n*n);
     for(int i=0;i<n*n;i++){
          cin>>a[i];
     }
     sort(a.begin(),a.end());

     vector<int>b(n*n);
     b[0]=a[0];
     for(int i=1;i<n;++i){
          b[i] = b[i-1]+c;
     }
     for(int i=1;i<n;++i){
          for(int j=0;j<n;++j){
                    //coulmn wise
               b[i*n+j] = b[(i-1)*n+j]+d;
          }
     }
     sort(b.begin(),b.end());

     /*for(int i=0;i<n*n;i++){
          cout<<vec[i]<<' ';
     }cout<<endl;*/
    /* int matrix[n][n];
      matrix[0][0] = 1;

     for (int j = 1; j < n; j++) {
            matrix[0][j] = matrix[0][j - 1] + d;
        }

        // Fill the rest of the matrix
        for (int i = 1; i < n; i++) {
            matrix[i][0] = matrix[i - 1][0] + c; // First column for the current row
            for (int j = 1; j < n; j++) {
                matrix[i][j] = matrix[i - 1][j] + c; // Based on the above row
                matrix[i][j] = max(matrix[i][j], matrix[i][j - 1] + d); // Ensure it matches both relations
            }
        }
        vector<int>v;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x;
                v.push_back(matrix[i][j]);
            }

        }
        sort(v.begin(),v.end());*/
        cout<<(a==b ?"YEs" : "nO")<<'\n';
}
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     solve();
    }
    return 0;
}
