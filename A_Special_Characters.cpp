#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        if(n%2==1 || n == 1) cout <<"NO" << endl;
        else
        {
            cout << "YES" << endl;
            string ans = "AAB";
            for(int i=0; i<n/2; i++)
                cout << ans;
            cout << endl;
        }
    }
    return 0;
}