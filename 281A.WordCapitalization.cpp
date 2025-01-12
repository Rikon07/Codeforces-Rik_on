#include<bits/stdc++.h>
using namespace std;
int main()
{
    string letter;
    cin >> letter;
    if(letter[0] >= 'a' && letter[0] <= 'z')
        letter[0] -= 32;

    cout << letter << endl;
    return 0;
}

