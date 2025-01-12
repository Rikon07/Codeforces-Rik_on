#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    vector <int> students(n);
    for(int i=0; i<n; i++)
    {
        cin >> students[i];
    }

    sort(students.begin(), students.end());
    int total = 0;

    for(int i = 0; i<n-1; i+= 2)
    {
        total += abs(students[i] - students[i+1]);
    }
    return total;
}
int main()
{

    int N;
    cin >> N;
    cout << solve(N) << "\n";
    return 0;
}
