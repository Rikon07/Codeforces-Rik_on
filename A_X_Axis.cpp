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
        
        int val = INT_MAX;
        for(int i=1; i<=10; i++)
        {
            int distance = (abs(i-a))+(abs(i-b))+(abs(i-c));

            val = min(val, distance);
        }

        cout << val <<'\n';
    }
    return 0;
}