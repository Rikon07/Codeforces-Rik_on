#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, hundred, twenty, ten, five, one;
    cin >> n;
    hundred = n / 100;
    n = n%100;
    twenty = n / 20;
    n = n%20;
    ten = n / 10;
    n = n%10;
    five = n / 5;
    n= n%5;
    one = n / 1;

    cout << hundred+twenty+ten+five+one << endl;
    return 0;
}
