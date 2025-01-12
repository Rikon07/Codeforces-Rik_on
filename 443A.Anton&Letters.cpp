#include<bits/stdc++.h>
using namespace std;
int main()
{
    string letter;

    getline(cin, letter);
    int i, cnt=0;
    sort(letter.begin(), letter.end());
    for(i=0; i<letter.size(); i++)
    {
        if(letter[i] == '{' || letter[i] == '}' || letter[i] == ',' || letter[i] == ' ')
        {
            continue;
        }
        else
        {
            if(letter[i] != letter[i+1])
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
