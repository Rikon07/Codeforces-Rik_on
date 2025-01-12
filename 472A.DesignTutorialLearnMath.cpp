#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, flag = 1;
    cin >> n;

    for(i=2; i<n; i++)
    {
        for(j=2; j<n; j++)
        {
            if(i+j==n)
            {
                cout << i << " " << j << "\n";
                flag = 0;
                break;
            }
        }
        if(flag == 0)
                break;
    }
}
