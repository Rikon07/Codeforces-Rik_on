#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    string cells;
    cin >> cells;
    bool emp = false;
    int cnt = 0, action = 0;
    for(int i=0; i<n; i++)
    {
        if(cells[i] == '.')
        {
            cnt++;
            action++;
        }
        else
        {
            cnt = 0;
        }
        if(cnt > 2)
        {
            emp = true;
            break;
        }
    }
    if(emp)
        cout << 2 <<"\n";
    else
        cout << action <<"\n";
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
