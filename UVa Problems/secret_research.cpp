#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k,l,m,n,flag;
    char str[1000];
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            scanf("%s",str);
            l=strlen(str);
            if((str[0]=='4' || str[0]=='7') && l==1)
                printf("+\n");
            else if(str[0]=='1' && l==1)
                printf("+\n");
            else if((str[0]=='7' && str[1]=='8') && l==2)
                printf("+\n");
            else if(str[l-1]=='5' && str[l-2]=='3')
                printf("-\n");
            else if(str[0]=='9' && str[l-1]=='4')
                printf("*\n");
            else if(str[0]=='1' && str[1]=='9' && str[2]=='0')
                printf("?\n");
        }
    }
    return 0;
}
