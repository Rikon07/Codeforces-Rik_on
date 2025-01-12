#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string str;
        cin >> str;
        int n = str.size(), ab = 0, ba = 0;
        for(int i=0; i<n-1; i++)
        {
            if(str[i] == 'a' && str[i+1] == 'b')
            {
                ab++;
            }
            else if(str[i] == 'b' && str[i+1] == 'a')
            {
                ba++;
            }
        }
        if(ab == ba)
        {
            cout << str <<"\n";
            continue;
        }
        else
        {
            if(str[0] == 'a') str[0] = 'b';
            else str[0] = 'a';
            cout << str <<"\n";
        }
    }
    return 0;
}