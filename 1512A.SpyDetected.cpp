#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n], b[n], x;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        if(b[0] != b[1])
            x = b[0];
        else if(b[1] != b[n-1])
            x = b[n-1];
        for(i=0; i<n; i++)
        {
            if(a[i] == x)
                cout << i+1 << "\n";
        }
        //cout << "\n";
    }
    return 0;
}
