#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year, i;
    cin >> year;
    int y[5];
    for(i=year+1; i<10000; i++)
    {
        int rem, tmp = i, j = 0, k;
        while(tmp != 0)
        {
            rem = tmp % 10;
            tmp /= 10;
            y[j] = rem;
            j++;
        }
        if(y[0]!=y[1] && y[0]!=y[2] && y[0]!=y[3] && y[1]!=y[2] && y[1]!=y[3] && y[2]!=y[3])
            break;
    }
    cout << i << endl;
    return 0;
}
