#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, floor=1;
        double z;
        cin >> n >> x;
        if(n>2)
        {
            n -= 2;
            z = ceil(1.0*n/x);
            floor += (int)z;
        }
        cout << floor << endl;
    }
    return 0;
}
