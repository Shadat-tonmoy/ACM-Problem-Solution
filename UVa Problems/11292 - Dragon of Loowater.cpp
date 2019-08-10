#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,dia,pos,sum,num;
    int head[20001],knight[20001];
    while(scanf("%d %d",&a,&b))
    {
        if(a==0 && b==0)
            break;
        bool possible = true;
        for(i=0;i<a;i++)
            scanf("%d",&head[i]);
        for(i=0;i<b;i++)
            scanf("%d",&knight[i]);
        if(b<a)
        {
            printf("Loowater is doomed!\n");
        }
        else
        {
            sort(head,head+a);
            sort(knight,knight+b);
            pos=0;
            sum=0;
            num=0;
            for(i=0;i<a;i++)
            {
                dia = head[i];
                for(j=pos;j<b;j++)
                {
                    if(knight[j]>=dia)
                    {
                        sum+=knight[j];
                        pos=j+1;
                        num++;
                        break;
                    }
                }
            }
            if(num==a)
                cout<<sum<<endl;
            else printf("Loowater is doomed!\n");
        }




    }


    return 0;
}
