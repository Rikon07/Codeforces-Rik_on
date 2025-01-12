#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, i, j, flag = 0;
    cin >> n >> m;
    char photo[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> photo[i][j];
            if(photo[i][j] == 'C' || photo[i][j] == 'M' || photo[i][j] == 'Y')
            {
                flag = 1;
            }
        }
    }
    if(flag == 1)
        cout << "#Color\n";
    else
        cout << "#Black&White\n";
    return 0;
}
