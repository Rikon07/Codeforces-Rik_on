#include<bits/stdc++.h>
using namespace std;
int main()
{
    string gender;
    cin >> gender;
    string two;
    int i, j;
    for(i=0; i<gender.size(); i++)
    {
        for(j=0; j<gender.size(); j++)
        {
            if(gender[i] == gender[j])
                break;
        }
        if(i==j)
            two += gender[i];
    }
    int n = two.size();

    if(n%2 == 0)
    cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}
