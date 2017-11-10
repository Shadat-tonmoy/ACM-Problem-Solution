#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int i,j,k=1,l,m,n,d,o,f,c_d[10000],o_d[10000],count[10000],sum,maxi,c=0;
    while(cin>>d>>o>>f)
    {
        if(d==0 && o==0 && f==0)
            break;
        c++;
        sum=0;
        maxi=0;
        for(i=0; i<=d; i++)
            count[i]=0;
        for(i=1; i<=d; i++)
            cin>>c_d[i];
        for(i=1; i<=o; i++)
            cin>>o_d[i];
        for(i=1; i<=o; i++)
        {
            for(j=1; j<=d; j++)
            {
                if(o_d[i]==j)
                {
                    count[j]++;
                    if(count[j]%2==0)
                    {
                        sum-=c_d[j];
                        if(sum>maxi)
                            maxi=sum;
                    }
                    else
                    {
                        sum+=c_d[j];
                        if(sum>maxi)
                            maxi=sum;
                    }
                    break;
                }
            }
        }

        if(maxi>f)
        {
            printf("Sequence %d\nFuse was blown.\n\n",c);

        }
        else
        {
            printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n",c,maxi);

        }



    }
    return 0;
}
