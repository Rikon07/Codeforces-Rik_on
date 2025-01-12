#include<bits/stdc++.h>
using namespace std;
int solve(int n, int k)
{
    vector<int> programmers(n);
    int participate = 0;
    for(int i=0; i<n; i++)
    {
        cin >> programmers[i];
        if((5-programmers[i]) >= k)
            participate++;
    }
    return (participate/3);
}
int main()
{
    int n, k;
    cin >> n >> k;
    cout << solve(n, k) <<"\n";
    return 0;
}