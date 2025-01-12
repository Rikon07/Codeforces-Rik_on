#include<bits/stdc++.h>
using namespace std;

long long int board(int n)
{
    vector<int> column, row;

    long long int cost1=0, cost2=0;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        column.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        row.push_back(x);
    }
    sort(column.begin(), column.end());
    sort(row.begin(), row.end());
    for(int i=0; i<n; i++)
    {
        cost1 += row[0] + column[i];
        cost2 += column[0] + row[i];
    }
    return min(cost1, cost2);
}

int main()
{
    int t, N;
    long long int min_cost;
    cin >> t;
    while(t--)
    {
        cin >> N;
        min_cost = board(N);
        cout << min_cost << "\n";
    }
    return 0;
}
