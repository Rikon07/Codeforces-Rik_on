#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j=1;
    string s;
    cin >> n >> s;
    for(i=0; i<n; i += j)
    {
        cout << s.at(i);
        j++;
    }
    cout << "\n";
    return 0;
}
