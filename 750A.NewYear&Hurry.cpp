#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, solving_time=0;
    cin >> n >> k;
    for(i=1; i<=n; i++)
    {
        solving_time += 5*i;
        if(solving_time > 240-k)
            break;
    }
    cout << i-1 << "\n";
    return 0;
}
