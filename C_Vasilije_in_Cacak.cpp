#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        long long int n, k, x;
        cin >> n >> k >> x;
        if (k * (k + 1) / 2 <= x && x <= k * (2 * n - k + 1) / 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
