#include<bits/stdc++.h>
using namespace std;
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void colorRectangle(int n, int m)
{
    string s[n];
    for(int i=0; i<n; i++)
        cin >> s[i];

    for(char ch: {'W', 'B'})
    {
        int rmax = 0, rmin = INT_MAX, cmax = 0, cmin = INT_MAX;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(s[i][j] == ch)
                {
                    rmax = max(rmax, i);
                    cmax = max(cmax, j);
                    rmin = min(rmin, i);
                    cmin = min(cmin, j);
                }
            }
        }
        if(rmax == n-1 && rmin == 0 && cmax == m-1 && cmin == 0)
        {
            Yes;
            return;
        }
    }
    No;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, m;
        cin >> n >> m;

        colorRectangle(n, m);
    }
    return 0;
}