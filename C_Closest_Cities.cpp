#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int CountCoins(int n, int x, int y, vector<int> &left, vector<int> &right)
{
    if(x == y)
    {
        return 0;
    }
    else
    {
        if(y > x)
        {
            return right[x - 1] - right[y - 1];
        }
        else
        {
            return left[x - 1] - left[y - 1];
        }
    }
}
void SamnePichonerHishab(int n, vector<int> &cities, map<int, int> &direction)
{
    direction[0] = 1;
    direction[n-1] = -1;
    for(int i=1; i<n-1; i++)
    {
        int first = abs(cities[i] - cities[i-1]);
        int second = abs(cities[i] - cities[i+1]);

        if(second < first)
        {
            direction[i] = 1;
        }
        else
        {
            direction[i] = -1;
        }
    }
}
void prefixSumLeftRight(int n, vector<int> &left, vector<int> &right, vector<int> &cities, map<int, int> &direction)
{
    left[0] = 0;
    for(int i = 1; i < n; i++)
    {
        if(direction[i] == -1)
            left[i] = 1 + left[i - 1];
        else
            left[i] = left[i - 1] + abs(cities[i] - cities[i - 1]);
    }
    right[n - 1] = 0;
    for(int i = n - 2; i >= 0; i--)
    {
        if(direction[i] == 1)
        {
            right[i] = 1 + right[i + 1];
        }
        else
        {
            right[i] = right[i + 1] + abs(cities[i] - cities[i + 1]);
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;

        vector<int> cities(n), left(n), right(n);

        for(int i=0; i<n; i++)
            cin >> cities[i];
        
        map<int, int> direction;
        SamnePichonerHishab(n, cities, direction);
        prefixSumLeftRight(n, left, right, cities, direction);
        
        int query;
        cin >> query;
        while(query--)
        {
            int x, y;
            cin >> x >> y;
            cout << CountCoins(n, x, y, left, right) <<"\n";
        }
    }
    return 0;
}