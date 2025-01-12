#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

string solve(int n, int c, int d)
{
    vector<int> ar(n*n);
    int mini = INT_MAX;
    map<int, int> mp;
    for(int i=0; i<n*n; i++)
    {
        cin >> ar[i];
        mini = min(mini, ar[i]);
        mp[ar[i]]++;
    }

    vector<vector<int>> sq(n, vector<int>(n, 0));
    sq[0][0] = mini;
    
    for(int i=0; i<n; i++)
    {
        if(i != 0)
            sq[i][0] = sq[i-1][0]+c;
        for(int j=0; j<n; j++)
        {
            if(j != 0)
                sq[i][j] = sq[i][j-1]+d;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int tmp = sq[i][j];
            if(mp.find(tmp) == mp.end())
            {
                return "NO";
            }
            else
            {
                mp[tmp]--;
                if(mp[tmp] == 0)
                    mp.erase(tmp);
            }
        }
    }
    return "YES";
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, c, d;
        cin >> n >> c >> d;

        cout << solve(n, c, d) <<"\n";
    }
    return 0;
}