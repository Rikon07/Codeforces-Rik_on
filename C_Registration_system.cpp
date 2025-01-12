#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int>system;
    string name;

    for(int i=0; i<n; i++)
    {
        cin >> name;
        //system.insert(name);

        if(system.count(name) == 0){
            cout << "OK\n";
            system[name] = 1;
        }
        else{
            cout << name << system[name]<<"\n";
            system[name]++;
        }
    }
    return 0;
}