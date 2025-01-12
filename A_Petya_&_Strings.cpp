#include<bits/stdc++.h>
using namespace std;
int main()
{
    string one;
    string two;
    int i, flag = 0;
    cin >> one >> two;
    for(i=0; i<one.size(); i++)
    {
        if(one[i] >= 'A' && one[i] <= 'Z')
        {
            one[i] += 32;
        }
    }
    for(i=0; i<two.size(); i++)
    {
        if(two[i] >= 'A' && two[i] <= 'Z')
        {
            two[i] += 32;
        }
    }
    for(i=0; i<one.size(); i++)
    {
        if(one[i] < two[i])
        {
            cout << "-1" << endl;
            flag = 1;
            break;
        }
        else if(one[i] > two[i])
        {
            cout << "1" << endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout << "0" << endl;

    return 0;
}
