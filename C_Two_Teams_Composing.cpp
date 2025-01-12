#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int TeamCompose(int n)
{
    vector<int> student(n);
    for(int &participant: student)
        cin >> participant;
    
    map<int ,int> mp;
    int same = 0;
    for(int i=0; i<n; i++)
    {
        mp[student[i]]++;
        if(mp[student[i]] > same)
            same++;
    }
    int s = mp.size();
    if(same == mp.size())
        return same-1;
    else
        return min(same, s);
}
int main()
{
    int test;
        cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        
        cout << TeamCompose(n) << endl;
    }
    return 0;
}