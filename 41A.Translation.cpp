#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word, reverse_word;
    cin >> word;
    cin >> reverse_word;
    reverse(reverse_word.begin(), reverse_word.end());
    if(word == reverse_word)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
