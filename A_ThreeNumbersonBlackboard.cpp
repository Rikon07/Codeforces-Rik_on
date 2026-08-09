#include<bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c)
{
    int maxi = max({a, b, c});
    int mini = min({a, b, c});
    int diff = maxi - mini;
    int mid = a + b + c - maxi - mini;
    
    while(1)
    {
        int sum = mid + mini;
        
        if(sum < maxi)
        {
            maxi = sum;
            mid = sum - mini;
            diff = maxi - mini;
        }
        else
        {
            cout << diff << endl;
            return;
        }
    }

}

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        solve(a, b, c);
    }
}