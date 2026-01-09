#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> freq(n + 2, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= n) {
            freq[a[i]]++;
        }
    }

    int mex = 0;
    while (freq[mex] > 0) {
        mex++;
    }

    int ans = mex;
    if (ans > k - 1) {
        ans = k - 1;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}