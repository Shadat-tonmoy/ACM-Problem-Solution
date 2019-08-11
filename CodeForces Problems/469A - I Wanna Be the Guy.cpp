#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,p;
    set<int> data;
    while(cin>>n)
    {
        cin>>p;
        for(i=1;i<=p;i++)
        {
            cin>>m;
            data.insert(m);
        }
        cin>>p;
        for(i=1;i<=p;i++)
        {
            cin>>m;
            data.insert(m);
        }
        if(data.size()==n)
            printf("I become the guy.\n");
        else printf("Oh, my keyboard!\n");
        data.clear();

    }
    return 0;
}
