#include <bits/stdc++.h>
using namespace std;
char LatinSquare()
{
    char ret;
    for (int j = 0; j < 3; j++)
    {
        string code;
        cin >> code;
        int n = code.size();
        for (int i = 0; i < n; i++)
        {
            if (code[i] == '?')
            {
                if (i > 0 && i < n - 1)
                {
                    if (code[i - 1] == 'A' && code[i + 1] == 'B' || code[i - 1] == 'B' && code[i + 1] == 'A')
                    {
                        ret = 'C';
                    }
                    else if (code[i - 1] == 'A' && code[i + 1] == 'C' || code[i - 1] == 'C' && code[i + 1] == 'A')
                    {
                        ret = 'B';
                    }
                    else if (code[i - 1] == 'B' && code[i + 1] == 'C' || code[i - 1] == 'C' && code[i + 1] == 'B')
                    {
                        ret = 'A';
                    }
                }
                else if (i == 0)
                {
                    if (code[i + 1] == 'B' && code[i + 2] == 'C' || code[i + 1] == 'C' && code[i + 2] == 'B')
                    {
                        ret = 'A';
                    }
                    else if (code[i + 1] == 'A' && code[i + 2] == 'B' || code[i + 1] == 'B' && code[i + 2] == 'A')
                    {
                        ret = 'C';
                    }
                    else if (code[i + 1] == 'A' && code[i + 2] == 'C' || code[i + 1] == 'C' && code[i + 2] == 'A')
                    {
                        ret = 'B';
                    }
                }
                else if (i == n - 1)
                {
                    if (code[i - 1] == 'B' && code[i - 2] == 'C' || code[i - 1] == 'C' && code[i - 2] == 'B')
                    {
                        ret = 'A';
                    }
                    else if (code[i - 1] == 'A' && code[i - 2] == 'B' || code[i - 1] == 'B' && code[i - 2] == 'A')
                    {
                        ret = 'C';
                    }
                    else if (code[i - 1] == 'A' && code[i - 2] == 'C' || code[i - 1] == 'C' && code[i - 2] == 'A')
                    {
                        ret = 'B';
                    }
                }
            }
        }
    }
    return ret;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cout << LatinSquare() << "\n";
    }
    return 0;
}
