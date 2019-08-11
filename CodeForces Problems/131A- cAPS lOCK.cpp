#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k;
    char str[1000];
    while(gets(str))
    {
        int len = strlen(str);
        bool found = false;
        for(i=1; i<len; i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                found = true;
                break;
            }
        }
        if(found)
            cout<<str<<endl;
        else
        {
            for(i=0; i<len; i++)
            {
                if(i==0)
                {
                    if(str[0]>='a' && str[0]<='z')
                        str[0]-=32;
                    else if(str[0]>='A' && str[0]<='Z')
                        str[i]+=32;
                }
                else if (str[i]>='A' && str[i]<='Z')
                    str[i]+=32;
            }

            cout<<str<<endl;
        }

    }
    return 0;
}
