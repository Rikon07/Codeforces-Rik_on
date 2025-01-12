#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int a, b, c;
            cin >> a >> b >> c;
        
        if(a < b && b < c)
            cout << "STAIR\n";
        else if(a < b && b > c)
            cout << "PEAK\n";
        else
            cout << "NONE\n";
    }
    return 0;
}