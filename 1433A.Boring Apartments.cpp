#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string x;
        cin >> x;
        int dig, len;

        dig = x[0] - '0' - 1;
        len = x.size();

        cout << (dig*10) + len*(len+1)/2 << "\n";
    }
    return 0;
}
