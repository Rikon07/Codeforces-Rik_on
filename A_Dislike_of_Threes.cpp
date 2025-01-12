#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, k;
    cin >> t;

    while(t--)
    {
        cin >> k;
        int cnt=0, i=1;
        for(i=1; i<1667; i++)
        {
            if(i%3==0 || i%10==3)
                continue;
            cnt++;
            if(cnt == k)
                break;
        }
        cout << i << "\n";
    }
    return 0;
}
