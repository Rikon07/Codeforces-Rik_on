#include<bits/stdc++.h>
using namespace std;

void Balanced(int n)
{
    if(n % 4 != 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES\n";
        int arr[n], x=2, y=1, even_sum=0, odd_sum=0;
        for(int i=0; i<n; i++)
        {
            if(i < n/2)
            {
                arr[i] = x;
                even_sum += x;
                x += 2;
            }
            else if(i >= n/2 && i < n-1)
            {
                arr[i] = y;
                odd_sum += y;
                y += 2;
            }
            else
            {
                arr[i] = even_sum - odd_sum;
            }
        }
        for(auto it: arr)
        {
            cout << it << " ";
        }
    }
}

int main()
{
    int test, N;
    cin >> test;
    while(test--)
    {
        cin >> N;
        Balanced(N);
        cout << "\n";
    }
    return 0;
}
