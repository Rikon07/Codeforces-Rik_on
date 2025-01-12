#include<bits/stdc++.h>
using namespace std;
int main()
{
    string hello;
    cin >> hello;
    int i, j = 0, cnt = 0;
    string h = "hello";
    for(i=0; i<hello.size(); i++)
    {
        if(hello[i] == h[j])
        {
            cnt++;
            j++;
        }
    }
    if(cnt == 5)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

