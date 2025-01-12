#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int query, a, b, k;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> k;
        (k%2==0) ? query=(a*(k/2))-(b*(k/2)) : query=(a*((k/2)+1))-(b*(k/2));

        cout << query << "\n";
    }
    return 0;
}
