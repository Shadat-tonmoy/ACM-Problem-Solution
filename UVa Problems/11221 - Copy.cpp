#include<bits/stdc++.h>
using namespace std;
char str[100000],rev[100000],ac[100000];
int main ()
{
    int i,j,k,l,m,c,n,a,b,r,flag;
    while(cin>>n)
    {
        getchar();
        for(m=1; m<=n; m++)
        {
            gets(str);
            flag = 0;
            int len = strlen(str);
            c=0;
            b=0;
            for(i=0; i<len; i++)
            {
                if(str[i]>='a' && str[i]<='z')
                {
                    ac[b++]=str[i];
                    c++;
                }
            }
            ac[b]='\0';
            r = sqrt(c);
            len = strlen(ac);
            printf("Case #%d:\n", m);
            //cout<<ac<<endl<<str<<endl;
            if(r*r == c)
            {
                a=0;
                for(i=len-1; i>=0; i--)
                {
                    rev[a++] = ac[i];
                }
                rev[a]='\0';
                //for(i=0;i<rev)
                //cout<<rev<<endl;
                if(strcmp(ac,rev)==0)
                    cout<<r<<endl;
                else printf("No magic :(\n");
            }
            else printf("No magic :(\n");
        }
    }
    return 0;
}


