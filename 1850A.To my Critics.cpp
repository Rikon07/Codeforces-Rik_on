#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int digits[3];
        for(int i=0; i<3; i++)
        {
            cin >> digits[i];
        }
        sort(digits, digits+3);

        (digits[1]+digits[2] >= 10) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}

