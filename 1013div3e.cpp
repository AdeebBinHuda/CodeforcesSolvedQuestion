#include <iostream>
#include <vector>
using namespace std;

bool canArrange(int n, int m, int k, int maxLength) {
    int totalDesks = 0;
    for (int i = 0; i < n; ++i) {
        // Calculate how many desks can fit in each row
        totalDesks += min(k, maxLength);
        k -= min(k, maxLength);  // Decrease remaining desks
        if (k <= 0) break; // If all desks are arranged, stop early
    }
    return k <= 0; // Return true if all desks are arranged
}

void solve() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k; // Read n (rows), m (spots per row), k (participants)

        if (n == 2 || n == 4) {
            cout << "-1\n"; // It's impossible for n = 2 or n = 4
            continue;
        }

        // Binary search for the minimum possible maximum bench length
        int low = 1, high = m, result = m;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Check if it's possible to arrange desks such that no bench is longer than `mid`
            if (canArrange(n, m, k, mid)) {
                result = mid;
                high = mid - 1; // Try for smaller max bench length
            } else {
                low = mid + 1; // Try for larger max bench length
            }
        }

        cout << result << endl; // Output the result for the test case
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve(); // Call the solve function
    return 0;
}

