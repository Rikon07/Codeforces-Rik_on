#include<bits/stdc++.h>
using namespace std;
char Stripes()
{
    char grid[8][8];
    vector <int> arr;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cin >> grid[i][j];
            if(grid[i][j] == 'R'){
                arr.push_back(i);
            }
        }
    }
    for(int i=0; i<arr.size(); i++)
    {
        int flag = 1;
        for(int j=0; j<8; j++)
        {
            if(grid[i][j] != 'R'){
                flag = 0;
                break;
            }
        }
        if(flag) return 'R';
    }
    return 'B';
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        cout << Stripes() <<"\n";
    }
    return 0;
}