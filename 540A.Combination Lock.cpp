#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, moves = 0, a, b;
    cin >> n;

    string x, y;
    cin >> x >> y;

    for(int i = 0; i<n; i++)
    {
        a = 10 - abs(x[i] - y[i]);
        b = abs(x[i] - y[i]);
        moves += min(a, b);
    }
    cout << moves << "\n";
    return 0;
}
