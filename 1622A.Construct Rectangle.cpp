#include<bits/stdc++.h>
using namespace std;

string Rectangle(int a, int b, int c)
{
    if(a == b){
        if(c % 2 == 0) return "YES";
        else return "NO";
    }
    else if(a == c){
        if(b % 2 == 0) return "YES";
        else return "NO";
    }
    else if(b == c){
        if(a % 2 == 0) return "YES";
        else return "NO";
    }
    else
    {
        if(a+b == c){
            return "YES";
        }
        else if(b+c == a){
            return "YES";
        }
        else if(a+c == b){
            return "YES";
        }
        else
            return "NO";
    }
}

int main()
{
    int test, l1, l2, l3;
    cin >> test;
    while(test--)
    {
        cin >> l1 >> l2 >> l3;
        cout << Rectangle(l1, l2, l3) << "\n";
    }
    return 0;
}
