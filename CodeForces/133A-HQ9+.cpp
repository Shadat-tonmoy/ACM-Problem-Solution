#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n;
    char str[10000];
    bool found = false;
    while(gets(str))
    {
        found = false;
        l = strlen(str);
        for(i=0; i<l; i++)
        {
            if(str[i]=='H' || str[i]=='Q' || str[i]=='9' || (str[i]=='+' && i==l-1))
            {
                if(str[i]=='+')
                {
                    if(i==l-1)
                    {
                       // cout<<"y"<<endl;
                        if(str[i-1]=='H' || str[i-1]=='Q' || str[i-1]=='9')
                        {

                            found = true;
                            break;
                        }
                        //cout<<str[i-1]<<endl;
                    }
                    else
                    {
                        if((str[i-1]=='H' || str[i-1]=='Q' || str[i-1]=='9') && (str[i+1]=='H' || str[i+1]=='Q' || str[i+1]=='9') )
                        {
                            found = true;
                            break;
                        }

                    }
                }
                else
                {
                    found = true;
                    break;

                }

            }
        }
        if(found)
            printf("YES\n");
        else printf("NO\n");
    }


    return 0;
}
