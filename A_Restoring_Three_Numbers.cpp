#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numbers[4], i;
    for(i=0; i<4; i++)
    {
        cin >> numbers[i];
    }
    sort(numbers, numbers+4);
        for(i=0; i<3; i++)
    {
        cout << numbers[3]-numbers[i] << " ";
    }
    cout << "\n";
    return 0;
}
