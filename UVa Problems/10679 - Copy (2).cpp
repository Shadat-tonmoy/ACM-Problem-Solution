#include<bits/stdc++.h>
using namespace std;
char grid[10000][10000];
int main ()
{
    int i,j,k,l,m,c,n,a,b,r,flag;
    string str,rev;
    while(cin>>n)
    {
        getchar();
        for(m=1; m<=n; m++)
        {
            getline(cin,str);
            flag = 0;
            int len = str.size();
            c=0;
            for(i=0; i<len; i++)
            {
                if(str[i]>='a' && str[i]<='z')
                    c++;
            }
            r = sqrt(c);
            printf("Case #%d:\n", m);
            if(r*r == c)
            {
                a=0;
                for(i=len-1; i>=0; i--)
                {
                    rev[a++]=str[i];
                }
                rev[a]='\0';
                if(rev == str)
                    cout<<r<<endl;
                else printf("No magic :(\n");
            }
            else printf("No magic :(\n");
        }

    }
    return 0;
}
