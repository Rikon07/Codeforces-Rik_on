#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int i, count_uppercase=0, count_lowercase=0;
    for(i=0; i<word.size(); i++)
    {
        if(word[i] >= 'a' && word[i] <= 'z')
            count_lowercase++;
        else if(word[i] >= 'A' && word[i] <= 'Z')
            count_uppercase++;
    }
    if(count_lowercase >= count_uppercase)
    {
        for(i=0; i<word.size(); i++)
        {
            if(word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] += 32;
            }
        }
    }
    else if(count_lowercase < count_uppercase)
    {
        for(i=0; i<word.size(); i++)
        {
            if(word[i] >= 'a' && word[i] <= 'z')
            {
                word[i] -= 32;
            }
        }
   }
   cout << word << endl;
        return 0;
}
