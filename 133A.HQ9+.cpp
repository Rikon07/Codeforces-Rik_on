#include<bits/stdc++.h>
using namespace std;
int main()
{
    string program;
    cin >> program;
    int i, flag =  0;
    for(i=0; i<program.size(); i++)
    {
        if(program[i] == 'H' || program[i] == 'Q' || program[i] == '9')
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
