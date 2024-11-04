#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> vec_a(n);
    vector<int> vec_b(n);

    for (int i = 0; i < n; i++) {
        cin >> vec_a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> vec_b[i];
    }

    int m;
    cin >> m;
    vector<int> d(m);
    for (int i = 0; i < m; i++) {
        cin >> d[i];
    }

    vector<int> modified_a(vec_a);
    for (int i = 0; i < m; i++) {
        int c;
        cin >> c;
        modified_a[c - 1] = d[i];
    }

    sort(vec_b.begin(), vec_b.end());
    sort(modified_a.begin(), modified_a.end());

    if (vec_b == modified_a) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

