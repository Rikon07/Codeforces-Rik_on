#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve(int n, vector<int> &ar)
{
    int On = 0, mini = 0, maxi = 0;
    for(int i=0; i<2*n; i++)
    {
        if(ar[i] == 1) On++;
    }
    mini = On % 2;
    maxi = min(On, 2*n-On);

    cout << mini <<" "<< maxi <<'\n';
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
            cin >> n;
        vector<int> ar(2*n);
        for(int i=0; i<2*n; i++)
        {
            cin >> ar[i];
        }

        solve(n, ar);
    }
    return 0;
}