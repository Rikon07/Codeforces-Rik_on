#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, moves;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(abs(a-b) % 10 != 0)
            moves = abs(a-b)/10 + 1;
        else
            moves = abs(a-b)/10;

        cout << moves << "\n";
    }
    return 0;
}
