#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    
    int juice[n];
    int emp = 0, cnt = 0;
    for(int i=0; i<n; i++)
    {
        cin >> juice[i];

        if(juice[i] > b) continue;
        cnt += juice[i];
        if(cnt > d)
        {
            emp++;
            cnt = 0;
        }
    }
    cout << emp <<"\n";
    return 0;
}
