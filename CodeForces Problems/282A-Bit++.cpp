#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,x;
    string str;
    while(cin>>n)
    {
        x=0;
        for(i=0;i<n;i++)
        {
            cin>>str;
            if(str=="X++")
                x++;
            else if (str=="++X")
                ++x;
            else if (str=="X--")
                x--;
            else if (str=="--X")
                --x;
        }
        cout<<x<<endl;
    }
    return 0;
}
