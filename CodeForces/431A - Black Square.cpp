#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,a1,a2,a3,a4;
    string str;
    map<char,int> weight;
    while (cin>>a1>>a2>>a3>>a4)
    {
        weight['1'] = a1;
        weight['2'] = a2;
        weight['3'] = a3;
        weight['4'] = a4;
        cin>>str;
        c = 0;
        for(i=0;i<str.size();i++)
        {
            c += weight[str[i]];
        }
        cout<<c<<endl;

    }

    return 0;

}
