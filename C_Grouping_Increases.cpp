#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(int n)
{
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int subOne = INT_MAX, subTwo = INT_MAX, pen = 0;
    for(int i=0; i<n; i++)
    {
        if(subOne > subTwo)
        {
            swap(subOne, subTwo);
        }
        if(arr[i] <= subOne)
        {
            subOne = arr[i];
        }
        else if(arr[i] <= subTwo)
        {
            subTwo = arr[i];
        }
        else
        {
            subOne = arr[i];
            pen++;
        }
    }
    return pen;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout << solve(n) <<"\n";
    }
    return 0;
}