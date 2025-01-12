#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void macSolve(int n)
{
    vector<int> ar(n), tmp;
    for(int &elements: ar)
        cin >> elements;

    tmp = ar;
    sort(tmp.begin(), tmp.end());
    ll ans = 0;
    for(int i=0; i<n; i++)
    {
        if(tmp[i] == ans)
            ans++;
    }
    if(ans > tmp[n-1] && tmp[0] != tmp[n-1])
    {
        cout << -1 <<"\n";
        return;
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;

        macSolve(n);
    }
    return 0;
}