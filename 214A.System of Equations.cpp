#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, x, pairs = 0;
    cin >> n >> m;

    for(i=0; i*i <= n && i <= m; i++)
    {
        x = n - i*i;
        if(x*x + i == m)
        {
            pairs++;
        }
    }
    cout << pairs << "\n";
    return 0;
}
