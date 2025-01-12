#include<bits/stdc++.h>
using namespace std;

long long int min_product(int a, int b, int x, int y, int n)
{
    long long int mini = 10e18;
    int tmpa = a, tmpb = b;
    while(n--)
    {
        if(tmpa*tmpb < mini){
            mini = tmpa*tmpb;
            tmpa--;
            if(tmpa < x)
                break;
        }
    }
    cout << mini << endl;
}

int main()
{
    int test, A, B, X, Y, N;
    cin >> test;
    while(test--)
    {
        cin >> A >> B >> X >> Y >> N;
        min_product(A, B, X, Y, N);
    }
}
