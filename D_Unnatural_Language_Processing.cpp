#include<bits/stdc++.h>
using namespace std;
bool vowel(char x)
{
    if(x == 'a' || x == 'e') return true;
    else return false;
}
bool con(char x)
{
    if(x == 'b' || x == 'c' || x == 'd') return true;
    else return false;
}
void unnaturalLanguage(int n)
{
    string s;
    cin >> s;
    vector<char> res;
    for(int i=n-1; i>=0; i--)
    {
        if(con(s[i]) && vowel(s[i-1]))
        {
            if(con(s[i-2]))
            {
                //cout << s[i] << s[i+1] << s[i+2] <<".";
                res.push_back(s[i]);
                res.push_back(s[i-1]);
                res.push_back(s[i-2]);
                res.push_back('.');
                i -= 2;
            }
            else
            {
                //cout << s[i] << s[i+1] <<".";
                res.push_back(s[i-1]);
                res.push_back(s[i]);
                res.push_back('.');
                i--;
            }
        }
        else if(vowel(s[i]) && con(s[i-1]))
        {
            res.push_back(s[i]);
            res.push_back(s[i-1]);
            res.push_back('.');
            i--;
        }
    }
    for(int i=res.size()-2; i>=0; i--)
    {
        //if(i == res.size()-1 && s[i] == '.')
            //continue;
       // else
            cout << res[i];
    }
    cout <<"\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        unnaturalLanguage(n);
    }
    return 0;
}