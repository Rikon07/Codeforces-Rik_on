#include<bits/stdc++.h>
using namespace std;

int Squares_Cubes(int n)
{
        int numbers = floor(cbrt(n)) + floor(sqrt(n));
        for(int i=1; pow(i,6) <= n; i++)
        {
            numbers--;
        }
        return numbers;
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N;
        cin >> N;
        cout << Squares_Cubes(N) << "\n";
    }
    return 0;
}
