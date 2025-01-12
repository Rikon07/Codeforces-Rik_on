#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 1010;
string mat[N];
int solve(int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> mat[i];
    }

    int op = 0;
    for(int i=0; i < n/2; i++)
    {
        for(int j=0; j < n/2; j++)
        {
            char a = mat[i][j];
            char b = mat[j][n-1-i];
            char c = mat[n-1-i][n-1-j];
            char d = mat[n-1-j][i];
            
            char maxC = max({a, b, c, d});

            op += (maxC-a) + (maxC-b) + (maxC-c) + (maxC-d);
        }
    }
    
    return op;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << solve(n) <<'\n';
    }
    return 0;
}