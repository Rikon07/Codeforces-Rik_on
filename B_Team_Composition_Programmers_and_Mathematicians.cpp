#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int a, b, team = 1;
        cin >> a >> b;
        if(a < b)
        {
            swap(a, b);
        }
        team = min(b, (a+b)/4);
        cout << team << "\n";
    }
    return 0;
}