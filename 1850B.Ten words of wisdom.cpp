#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a, b, max_quality=0, winner=0;
        for(int i=1; i<=n; i++)
        {
            cin >> a >> b;
            if(a <= 10 && b >= max_quality){
                max_quality = b;
                winner = i;
            }
        }
        cout << winner << "\n";
    }
    return 0;
}
