#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, exit, enter, passengers = 0, minimum = 0;
    cin >> n;
    while(n--)
    {
        cin >> exit >> enter;
        passengers += (enter - exit);

        if(passengers > minimum)
            minimum = passengers;
    }
    cout << minimum << endl;
    return 0;
}

