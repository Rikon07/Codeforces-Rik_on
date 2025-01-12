#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;

        cout << pow(min(max(2*b, a), max(2*a, b)), 2) << "\n";
    }
    return 0;
}
