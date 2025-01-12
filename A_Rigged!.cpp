#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n][2], first_s, first_e, w=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin >> arr[i][j];
            }
            first_s = arr[0][0];
            first_e = arr[0][1];

            if(i > 0 && arr[i][0] >= first_s)
            {
                if(arr[i][1] >= first_e)
                {
                    w = -1;
                }
            }
        }
        (w < 0) ? cout << w << "\n": cout << first_s << "\n";
    }
    return 0;
}
