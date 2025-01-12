#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, minimum = 0;
    cin >> n;
    string color;
    cin >> color;
    for(i=0; i<color.size(); i++)
    {
        if(color[i] == color[i+1])
            minimum++;
    }
    cout << minimum << endl;
    return 0;
}
