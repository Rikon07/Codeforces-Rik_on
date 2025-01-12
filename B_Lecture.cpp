#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void lecture(int n, int m)
{
    map<string, string> language;
    while(m--)
    {
        string f, s;
        cin >> f >> s;
        if(f.size() <= s.size())
            language[f] = f;
        else
            language[f] = s;
    }
    getchar();
    /*for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        cout << language[s] <<" ";

    }
    cout << endl;*/
    string lecrure;
    getline(cin, lecrure);
    stringstream ss;
    ss << lecrure;
    string word;
    while(ss >> word)
    {
        cout << language[word] <<" ";
    }
    cout << endl;
}
int main()
{
    int n, m;
    cin >> n >> m;
    lecture(n, m);
    return 0;
}