#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,upr,lwr,len;
    char str[1000];
    while(cin>>str)
    {
        len = strlen(str);
        lwr=0;
        upr=0;
        for(i=0;i<len;i++)
        {
            if(str[i]>='A' && str[i]<='Z')
                upr++;
            else lwr++;
        }
        if (upr>lwr)
        {
            for(i=0;i<len;i++)
            {
                if(str[i]>='a' && str[i]<='z')
                    str[i]-=32;
            }

        }
        else if (lwr>=upr)
        {
            for(i=0;i<len;i++)
            {
                if(str[i]>='A' && str[i]<='Z')
                    str[i]+=32;
            }
        }
        cout<<str<<endl;


    }





    return 0;

}


