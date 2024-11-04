#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> cubes(n);
        for (int i = 0; i < n; ++i) {
            cin >> cubes[i];
        }

        int fav_value = cubes[f - 1];

        sort(cubes.begin(), cubes.end(), greater<int>());
        int fav_count_top_k = 0;
        for (int i = 0; i < k; ++i) {
            if (cubes[i] == fav_value) {
                fav_count_top_k++;
            }
        }

        int total_fa_co = count(cubes.begin(), cubes.end(), fav_value);

        if (fav_count_top_k > 0) {
            cout << "YES" << endl;
        } else if (k >= total_fa_co) {
            cout << "MAYBE" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

