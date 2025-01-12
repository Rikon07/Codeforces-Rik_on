#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, n;
    cin >> test;
    while(test--)
    {
        cin >> n;
        int c1, c2;
        c1=n/3, c2=n/3;
        if(n%3 == 0)
        {
            cout << c1 << " " << c2 << "\n";
        }
        else if(n%3 == 1)
        {
            cout << c1+1 << " " << c2 << "\n";
        }
        else if(n%3 == 2)
        {
            cout << c1 << " " << c2+1 << "\n";
        }
    }
    return 0;
}
