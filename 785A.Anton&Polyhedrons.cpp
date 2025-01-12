#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0;
    cin >> n;
    string polyhedron;
    while(n--)
    {
        cin >> polyhedron;
        if(polyhedron == "Tetrahedron")
            sum += 4;
        else if(polyhedron == "Octahedron")
            sum += 8;
        else if(polyhedron == "Cube")
            sum += 6;
        else if(polyhedron == "Dodecahedron")
            sum += 12;
        else if(polyhedron == "Icosahedron")
            sum += 20;

    }
    cout << sum << endl;
    return 0;
}
