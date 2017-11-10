#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,c=0;
    char str[10000];
    while(gets(str))
    {
        bool found = false;
        l = strlen(str);
        c = 0;
        for(i=0; i<l;)
        {
            if(str[i]=='0')
            {
                c=0;
                while(str[i]=='0')
                {
                    c++;
                    i++;
                }
                //cout<<"C : "<<c<<endl;
                if(c>=7)
                {
                    found = true;
                    break;
                }
                else
                {
                    c=0;
                    //i++;
                }
            }
            else
            {
                c=0;
                while(str[i]=='1')
                {
                    c++;
                    i++;
                }
                //cout<<"C : "<<c<<endl;
                if(c>=7)
                {
                    found = true;
                    break;
                }
                else
                {
                    c=0;
                    //i++;
                }
            }
        }
        if (found)
            printf("YES\n");
        else printf("NO\n");


    }

    return 0;
}
