#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int metro(int n, int m, int k)
{
    vector<int> left(n), right(m);

    for(int &coin: left)
        cin >> coin;
    for(int &coin: right)
        cin >> coin;
    //sort(left.begin(), left.end());
    //sort(right.begin(), right.end());
    
    int ways = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if((left[i] + right[j]) <= k)
                ways++;
        }
    }
    return ways;
}
int main()
{
    int te;
    cin >> te;
    while(te--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        cout << metro(n, m, k) <<"\n";
    }
    return 0;
}