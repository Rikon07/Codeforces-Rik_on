#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        char grid[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> grid[i][j];
            }
        }
        bool f = 0, f1 = 0, f2 = 0, f3 = 0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                if(grid[i][j] == '0' && grid[i][j+1] == '1' && grid[i+1][j] == '1' && grid[i+1][j+1] == '1')
                    f = 1;
                if(grid[i][j] == '1' && grid[i][j+1] == '0' && grid[i+1][j] == '1' && grid[i+1][j + 1] == '1')
                    f1 = 1;
                if(grid[i][j] == '1' && grid[i][j+1] == '1' && grid[i+1][j] == '0' && grid[i+1][j+1] == '1')
                    f2 = 1;
                if(grid[i][j] == '1' && grid[i][j+1] == '1' && grid[i+1][j] == '1' && grid[i+1][j+1] == '0')
                    f3 = 1;
            }
        }
        if((f == 1 && f1 == 1 && f2 != 1 && f3 != 1) || (f2 == 1 && f3 == 1 && f == 0 && f1 == 0))
            cout << "TRIANGLE\n";
        else
            cout << "SQUARE\n";
        
    }
    return 0;
}