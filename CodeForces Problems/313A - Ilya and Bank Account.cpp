#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n;
    char str[1000];
    while(cin>>str)
    {
        l = strlen(str);
        if(str[0]!='-')
            cout<<str<<endl;
        else
        {
            if(str[l-2]>=str[l-1])
            {
                str[l-2]=str[l-1];
                str[l-1]='\0';
            }

            else
            {
                str[l-1]='\0';
            }
            if(strlen(str)==2 && (str[0]=='-' && str[1]=='0'))
            {
                str[0]='0';
                str[1]='\0';
            }
            cout<<str<<endl;
        }
    }




    return 0;

}


