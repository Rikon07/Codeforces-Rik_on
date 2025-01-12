#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
            cin >> n;
        vector<int> ar(n);
        for(int i=0; i<n; i++)
        {
            cin >> ar[i];
        }
        
        ll bPairs = 0;

        map<pair<int, int>, int> ab, bc, ac;
        map<tuple<int, int, int>, int> ab3, bc3, ac3;

        for(int i=0; i<n-2; i++)
        {
            int a = ar[i];
            int b = ar[i+1];
            int c = ar[i+2];
            ab[{a, b}]++;
            bc[{b, c}]++;
            ac[{a, c}]++;
            tuple<int, int, int> triple = make_tuple(a, b, c);
            ab3[triple]++;
            bc3[triple]++;
            ac3[triple]++;
            bPairs += ab[{a, b}] - ab3[triple];
            bPairs += bc[{b, c}] - bc3[triple];
            bPairs += ac[{a, c}] - ac3[triple];
        }
        cout << bPairs <<'\n';
    }
    return 0;
}