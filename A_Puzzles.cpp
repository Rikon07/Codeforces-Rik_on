#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> puzzle(m);
    for(int &quality: puzzle)
        cin >> quality;

    sort(puzzle.begin(), puzzle.end());

    int diff = INT_MAX;
    for(int k=0; k<=m-n; k++)
    {
        diff = min(diff, puzzle[k+n-1]-puzzle[k]);
    }

    if(diff == INT_MAX) 
        cout << 0 << endl;
    else
        cout << diff << endl;

    return 0;
}