#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve(int n, int m)
{
    vector<vector<int>> ar(n, vector<int>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> ar[i][j];
        }
    }

    bool f = true;
    while(f)
    {
        f = false;
        vector<vector<int>> mat = ar;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int up = 0, left = 0, down = 0, right = 0;
                
                up = (i > 0) ? ar[i-1][j] : 0;
                left = (j > 0) ? ar[i][j-1] : 0;
                down = (i < n-1) ? ar[i+1][j] : 0;
                right = (j < m-1) ? ar[i][j+1] : 0;

                int maxi = max({up, down, left, right});
                if(ar[i][j] > maxi)
                {
                    mat[i][j] = maxi;
                    f = true;
                }
            }
        }
        ar = mat;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << ar[i][j] <<" ";
        }
        cout <<'\n';
    }
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, m;
            cin >> n >> m;

        solve(n, m);
    }
    return 0;
}