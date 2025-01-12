#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int i, count_uppercase=0, count_lowercase=0;
    for(i=0; i<word.size(); i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z')
            word[i] += 32;
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='y')
            continue;
        cout << "." << word[i];
    }
    cout << endl;
        return 0;
}

