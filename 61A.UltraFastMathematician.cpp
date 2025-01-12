#include<bits/stdc++.h>
using namespace std;
int main()
{
    string one, two, three;
    cin >> one >> two;
    int i;
    for(i=0; i<one.size(); i++)
    {
        if(one[i] == two[i])
            cout << "0";
        else
            cout << "1";
    }
    cout << endl;
    return 0;
}
