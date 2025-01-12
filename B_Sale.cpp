#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> tv(n);
    for(int &set: tv)
        cin >> set;
    sort(tv.begin(), tv.end());
    int maxi = 0;
    for(int i=0; i<m; i++)
    {
        if(tv[i] < 1)
            maxi += abs(tv[i]);
    }

    cout << maxi <<"\n";

    return 0;
}