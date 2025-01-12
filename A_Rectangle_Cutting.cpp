#include <bits/stdc++.h>
#define yes cout << "Yes\n"
#define no cout << "No\n"
using namespace std;
typedef long long int ll;
void solve()
{
    int x, y;
    cin >> x >> y;
    if ((x % 2 != 0 && y % 2 != 0) || (x % 2 != 0 && y / 2 == x) || (y % 2 != 0 && x / 2 == y) || (x == 1 && y == 1))
        no;
    else
        yes;
}
int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        solve();
    }
    return 0;
}