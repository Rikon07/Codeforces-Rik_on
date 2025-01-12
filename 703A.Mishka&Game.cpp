#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, c, m_win=0, c_win=0;
    cin >> n;
    while(n--)
    {
        cin >> m >> c;
        if(m > c)
            m_win++;
        else if(c > m)
            c_win++;
    }
    if(m_win > c_win)
        cout << "Mishka\n";
    else if(c_win > m_win)
        cout << "Chris\n";
    else
        cout << "Friendship is magic!^^\n";
    return 0;
}
