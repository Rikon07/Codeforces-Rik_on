#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, i, width=0;
    cin >> n >> h;
    int friends[n];
    for(i=0; i<n; i++)
    {
        cin >> friends[i];
        if(friends[i] <= h)
            width++;
        else
            width += 2;
    }
    cout << width << endl;
    return 0;
}
