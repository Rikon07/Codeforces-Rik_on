#include<bits/stdc++.h>
using namespace std;

int letters(int n, string s)
{
    int max_alphabet=0;
    for(int i=0; i<n; i++)
    {
        if(s[i] > max_alphabet){
            max_alphabet = s[i];
        }
    }
    return max_alphabet-96;
}

int main()
{
    int test, N;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> N >> s;
        int sizee = letters(N, s);
        cout << sizee << "\n";
    }
    return 0;
}
