#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n;
    char str[1000];
    while(gets(str))
    {
        if(str[0]>='a' && str[0]<='z')
            str[0]-=32;
        cout<<str<<endl;
    }
    return 0;
}
