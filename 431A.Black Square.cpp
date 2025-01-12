#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, calory=0, i;
    string s;
    cin >> a >> b >> c >> d >> s;

    for(i=0; i<s.size(); i++)
    {
        if(s[i] == '1')
            calory += a;
        else if(s[i] == '2')
            calory += b;
        else if(s[i] == '3')
            calory += c;
        else if(s[i] == '4')
            calory += d;
    }
    cout << calory << "\n";
    return 0;
}
