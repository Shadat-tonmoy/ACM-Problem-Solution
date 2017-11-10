#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int i,j,k,l,se[20],a,b,s,c;
    while(cin>>s)
    {

        for(i=1;i<=s;i++)
        {
            c=0;
            for(j=0;j<13;j++)
            {
                cin>>se[j];
                if(se[j]==0)
                    c++;
            }
            if(c==0)
            printf("Set #%d: Yes\n",i);
            else printf("Set #%d: No\n",i);
        }
    }

    return 0;
}
