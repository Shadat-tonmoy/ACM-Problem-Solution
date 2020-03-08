#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,c=1,t=1,a;
    stack <char> s[1000];
    char str[10000];
    while(cin>>str)
    {
        if(strcmp(str,"end")==0)
            break;
        c=1;
        for(i=0; i<100; i++)
            s[i].push('0');
        l=strlen(str);
        s[0].push(str[0]);
        for(i=1; i<l; i++)
        {
            for(j=0; ; j++)
            {
                if(str[i]<=s[j].top())
                {
                    s[j].push(str[i]);
                    break;
                }
                else if(s[j].top()=='0')
                {
                    s[j].push(str[i]);
                    c++;
                    break;
                }
            }
        }
        printf("Case %d: %d\n",t,c);
        t++;

    }

    return 0;
}
