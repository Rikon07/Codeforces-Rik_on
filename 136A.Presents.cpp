#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int gift[n+1];
    for(i=0; i<n; i++)
    {
        cin >> gift[i];
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(gift[j] == i)
            {
                cout << j+1 << " ";
            }
        }
    }
    cout << endl;
    return 0;
}

