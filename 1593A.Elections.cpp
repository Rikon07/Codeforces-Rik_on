#include<bits/stdc++.h>
using namespace std;

int candidate(int x, int y, int z)
{
    int vote = max(0, max(y, z) - x + 1);
    return vote;
}

int main()
{
    int t;
    cin >> t;
    int a, b, c;
    while(t--)
    {
        cin >> a >> b >> c;

        cout << candidate(a, b, c) << " ";
        cout << candidate(b, a, c) << " ";
        cout << candidate(c, a, b) << "\n";
    }
    return 0;
}
