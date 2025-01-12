#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(int n)
{
    vector<int> seq(n);
        int two = 0;
        for(int i=0; i<n; i++)
        {
            cin >> seq[i];
            two += (seq[i] == 2);
        }
        if(two % 2)
        {
            cout <<"-1"<< "\n";
            return;
        }
        int cnt = 0, ind = 0;
        for(ind=0; ind<n; ind++)
        {
            cnt += (seq[ind] == 2);
            if(2*cnt == two)
                break;
        }
        cout<< ++ind <<"\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
