#include<bits/stdc++.h>
using namespace std;

void find_bishop()
{
    char str[8][8];
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cin >> str[i][j];
        }
    }
    int row = 0, column = 0;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if (str[i][j] == '#' && str[i-1][j-1] == '#' && str[i-1][j+1] == '#' && str[i+1][j-1] == '#' && str[i+1][j+1] == '#')
            {
				row = ++i;
                column = ++j;
                break;
			}
        }
    }
    cout << row << " " << column;
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        find_bishop();
        cout << "\n";
    }
    return 0;
}
