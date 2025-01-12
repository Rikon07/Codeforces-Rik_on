#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, i, first_diff, last_diff, max_diff=0;
    cin >> n >> l;
    int lanterns[n];
    for(i=0; i<n; i++)
    {
        cin >> lanterns[i];
    }
    sort(lanterns, lanterns+n);

    first_diff = lanterns[0] - 0;
    last_diff =l - lanterns[n-1];

    for(i=0; i<n-1; i++)
    {
        if((lanterns[i+1]-lanterns[i]) > max_diff)
            max_diff = lanterns[i+1]-lanterns[i];
    }

    if(max(first_diff, last_diff) >= (double)max_diff/2)
        cout << fixed << setprecision(10) << (double)max(first_diff, last_diff) << "\n";
    else
        cout << fixed << setprecision(10) << (double)max_diff/2 << "\n";

    return 0;
}
