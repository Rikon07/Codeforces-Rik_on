#include<bits/stdc++.h>
using namespace std;
void PrimeDetection()
{
    string num;
    cin >> num;
    int one = 0, three = 0;
    for(auto n: num)
    {
        if(n == '1'){
            one = 1;
        }
        if(one == 1 && n == '3'){
            cout << "13\n";
            break;
        }
        if(one == 0 && n == '3'){
            three = 1;
        }
        if(three == 1 && n == '1'){
            cout << "31\n";
            break;
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        PrimeDetection();
    }
    return 0;
}