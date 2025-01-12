#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int i;
    if(word[0] >= 'a' && word[0] <= 'z')
    {
        int upper=0;
        for(i=1; i<word.size(); i++)
        {
            if(word[i] >= 'A' && word[i] <= 'Z')
                upper++;
        }
        if(upper == word.size()-1)
        {
            for(i=0; i<word.size(); i++)
            {
                if(word[i] >= 'A' && word[i] <= 'Z')
                    word[i] += 32;
                else
                    word[i] -= 32;
            }
            cout << word << endl;
        }
        else{
            cout << word << endl;
        }
    }
    else if(word[0] >= 'A' && word[0] <= 'Z')
    {
        int upper=0;
        for(i=1; i<word.size(); i++)
        {
            if(word[i] >= 'A' && word[i] <= 'Z')
                upper++;
        }
        if(upper == word.size()-1)
        {
            for(i=0; i<word.size(); i++)
            {
                if(word[i] >= 'A' && word[i] <= 'Z')
                    word[i] += 32;
            }
            cout << word << endl;
        }
        else
            cout << word << endl;
    }
    return 0;
}

