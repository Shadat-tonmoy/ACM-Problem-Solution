#include<stdio.h>
int main()
{
    int n,j,k,l,num[10000],a,t,i;
    while(scanf("%d",&n)==1 && n!=0)
    {
        j=0;
        k=0;
        l=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a>=0)
            {
                num[j++]=a;
            }
        }
        for(i=0;i<j;i++)
        {
            if(num[i]==0)
                k++;
        }
        if(k==j)
            printf("0\n");
        else
        {
            for(i=0;i<j;i++)
            {
                if(num[i]>0)
                {
                    l++;
                    if(l==1)
                        printf("%d",num[i]);
                    else printf(" %d",num[i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
