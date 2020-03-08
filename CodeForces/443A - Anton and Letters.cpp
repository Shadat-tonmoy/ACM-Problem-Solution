#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n;
    set<char>data;
    char str[10000];
    while(gets(str))
    {
        l = strlen(str);
        for(i=0;i<l;i++)
        {
            if(str[i]>='a' && str[i]<='z')
                data.insert(str[i]);
        }
        cout<<data.size()<<endl;
        data.clear();
    }
return 0;

}


