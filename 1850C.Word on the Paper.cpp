#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x;
        int i, j;
        for(i=0; i<8; i++)
        {
            cin >> x;
            for(j=0; j<x.size(); j++)
            {
                if(x[j] != '.')
                {
                    cout << x[j];
                }
            }
        }
        cout << "\n";
    }
    return 0;
}

