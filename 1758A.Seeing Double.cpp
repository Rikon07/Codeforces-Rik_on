#include<bits/stdc++.h>
using namespace std;

void palindrome(string str)
{
    string str2 = str;
    reverse(str2.begin(), str2.end());
    cout << str << str2 << "\n";
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        palindrome(s);
    }
    return 0;
}
