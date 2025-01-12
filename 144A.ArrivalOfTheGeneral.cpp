#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, max_value=0, min_value=101, max_index, min_index;
    cin >> n;
    int h[n];
    for(i=0; i<n; i++)
    {
        cin >> h[i];
        if(h[i] > max_value)
        {
            max_value = h[i];
            max_index = i;
        }
        if(h[i] <= min_value)
        {
            min_value = h[i];
            min_index = i;
        }
    }
    if(max_index > min_index)
        cout << max_index+(n-1)-min_index-1 << endl;
    else
        cout << max_index+(n-1)-min_index << endl;

    return 0;
}
