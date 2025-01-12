#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int num[n], flag = 0;
        for(i=0; i<n; i++)
        {
            cin >> num[i];
        }
        sort(num, num+n);
        for(i=1; i<n; i++)
        {
            if((num[i]-num[i-1]) > 1){
                flag = 1;
                 cout << "NO\n";
                break;
            }
        }
        if(flag == 0)
            cout << "YES\n";
    }
    return 0;
}
