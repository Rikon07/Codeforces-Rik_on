#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int>numbers;
        int x;
        for(int i=0; i<3; i++)
        {
            cin >> x;
            numbers.push_back(x);
        }
        sort(numbers.begin(), numbers.end());
        cout << numbers[1] << "\n";
    }
    return 0;
}
