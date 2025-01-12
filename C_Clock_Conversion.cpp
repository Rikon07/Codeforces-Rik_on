#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        string s;
            cin >> s;
        int hour = (s[0]-'0')*10 + (s[1]-'0');

        //cout << hour <<"\n";
        if(hour <= 12)
        {
            if(hour == 0)
            cout << 12 <<':'<<s[3]<<s[4] <<" AM\n";
            else if(hour < 10)
            cout <<'0'<< hour<<':'<<s[3]<<s[4] <<" AM\n";
            else if(hour == 12)
            cout << hour<<':'<<s[3]<<s[4] <<" PM\n";
            else
            cout << hour<<':'<<s[3]<<s[4] <<" AM\n";
        }
        else
        {
            if((hour-12) < 10)
            cout <<'0'<< hour-12<<':'<<s[3]<<s[4] <<" PM\n";
            else
            cout << hour-12<<':'<<s[3]<<s[4] <<" PM\n";
        }
    }
    return 0;
}