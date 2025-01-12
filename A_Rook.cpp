#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int n = s.size();
        for (int i = 1; i <= 8; i++)
        {
            if (s[1] - '0' != i)
            {
                cout << s[0];
                cout << i << "\n";
            }
        }
        for (char i = 'a'; i <= 'h'; i++)
        {
            if (s[0] != i)
            {
                cout << i;
                cout << s[1] << "\n";
            }
        }
    }
    return 0;
}