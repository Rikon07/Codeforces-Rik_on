#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, cnt=0;
    cin >> n;
    int h[n], y[n];
    for(i=0; i<n; i++)
    {
        cin >> h[i];
        cin >> y[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(h[i] == y[j])
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
