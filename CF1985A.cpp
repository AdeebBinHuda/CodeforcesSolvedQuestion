
#include <iostream>
#include <vector>

using namespace std;

int summulti(int x, int n) {
    int sum = 0;
    for (int i = x; i <= n; i += x) {
        sum += i;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    vector<int> results;

    while (t--) {
        int n;
        cin >> n;
        int max_sum = 0;
        int best_x = 2;

        for (int x = 2; x <= n; ++x) {
            int current = summulti(x, n);
            if (current > max_sum){
                max_sum = current;
                best_x = x;
            }
        }
        results.push_back(best_x);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}

