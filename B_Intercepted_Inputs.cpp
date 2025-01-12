#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve(int k)
{
    vector<int> grid(k);
    for(int &elements: grid)
    {
        cin >> elements;
    }
    sort(grid.begin(), grid.end());

    int target = k - 2;
    unordered_set<int> elements(grid.begin(), grid.end());

    for(int i = 1; i * i <= target; i++)
    {
        if(target % i == 0)
        {
            int n = i;
            int m = target / i;
            if(elements.count(n) && elements.count(m))
            {
                cout << n << " " << m << '\n';
                return;
            }
        }
    }
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int k;
            cin >> k;
        
        solve(k);
    }
    return 0;
}