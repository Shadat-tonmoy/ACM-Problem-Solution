#include<stdio.h>
#include<string.h>
char str[1000000],ss[1000000];
int main()
{
    int t,i,j,k,m,n,ts;
    int len,len1,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        len=strlen(str);
        scanf("%d",&ts);
        while(ts--)
        {
            scanf("%s",ss);
            count=0;
            len1=strlen(ss);
            for(i=0,j=0; i<len && j<len1; i++)
            {
                if(str[i]==ss[j])
                {
                    count++;
                    j++;
                    i++;
                    if(str[i]!=ss[j]) break;
                    else
                    {
                        while((str[i]==ss[j]) && (i<len && j<len1))
                        {
                            count++;
                            i++;
                            j++;
                        }
                    }
                }
                break;
            }
            if(count==len1) printf("y\n");
            else printf("n\n");
        }
    }

    return 0;
}
