#include<bits/stdc++.h>
using namespace std;

string fair_division(int n)
{
    int candies[n], one = 0, two = 0, total = 0;
    for(int i=0; i<n; i++)
    {
        cin >> candies[i];
        if(candies[i] == 1) one++;
        else two++;

        total += candies[i];
    }
    if(n % 2 == 0 && total % 2 == 0){
            return "YES";
    }
    else{
        if(total % 2 == 0){
            if(one > 0 && two > 0){
                return "YES";
            }
            else
                return "NO";
        }
        else
            return "NO";
    }
}
int main()
{
    int test, N;
    cin >> test;
    while(test--)
    {
        cin >> N;
        cout << fair_division(N) << "\n";
    }
    return 0;
}
