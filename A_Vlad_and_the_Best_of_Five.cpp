#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        int A=0, B=0;
        for(int i=0; i<5; i++)
        {
            if(s[i] == 'A') A++;
            else if(s[i] == 'B') B++;
        }
        if(A > B) cout << "A";
        else cout << "B";
        cout <<"\n";
    }
    return 0;
}