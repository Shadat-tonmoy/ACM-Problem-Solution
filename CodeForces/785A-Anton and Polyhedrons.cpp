#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,dif,sum,num[105],maxi;
    map<string,int> polyhedran;
    string key;
    polyhedran["Tetrahedron"] = 4;
    polyhedran["Cube"] = 6;
    polyhedran["Octahedron"] = 8;
    polyhedran["Dodecahedron"] = 12;
    polyhedran["Icosahedron"] = 20;
    while(cin>>n)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
             cin>>key;
             sum+=polyhedran[key];
        }
        cout<<sum<<endl;
    }
    return 0;
}
