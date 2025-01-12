#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string word;
    while(n--)
    {
        cin >> word;
        int len = word.size(), i;
        if(len > 10)
        {
            cout << word[0];
            cout << len-2;
            cout << word[len-1];
            cout << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
    return 0;
}
