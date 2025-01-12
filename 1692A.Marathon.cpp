#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    while(t--)
    {
        int runner[4], cnt=0;
        for(i=0; i<4; i++)
        {
            cin >> runner[i];
        }
        for(i=1; i<4; i++)
        {
            if(runner[i] > runner[0])
                cnt++;
        }
        cout << cnt <<"\n";
    }
    return 0;
}
