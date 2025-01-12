#include<bits/stdc++.h>
using namespace std;
int main()
{
    string lyric;
    cin >> lyric;
    int i;
    for(i=0; i<lyric.size(); i++)
    {
        if(lyric[i]=='W' && lyric[i+1]=='U' && lyric[i+2]=='B')
        {
            i += 2;
            cout << " ";
        }
        else
            cout << lyric[i];
    }
    cout << "\n";
    return 0;
}
