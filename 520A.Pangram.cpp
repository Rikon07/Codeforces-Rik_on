#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, cnt=0;
    cin >> n;
    string word;
    string alphabets = "abcdefghijklmnopqrstuvwxyz";
    cin >> word;
    if(n < 26)
        cout << "NO\n";
    else
    {
        for(i=0; i<n; i++)
        {
            if(word[i] >= 'A' && word[i] <= 'Z')
                word[i] += 32;
        }
        sort(word.begin(), word.end());

        int j = 0;
        for(i=0; i<n; i++)
        {
            if(word[i] == alphabets[j])
            {
                cnt++;
                j++;
            }
        }
        if(cnt == 26)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
