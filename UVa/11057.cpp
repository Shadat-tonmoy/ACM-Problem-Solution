#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    long int i,j,k,l,m,n,a,b,c,num[100000],mini,sum,dif;
    while(cin>>n)
    {
        mini=2000000;
        for(i=0; i<n; i++)
        {
            cin>>num[i];
        }
        cin>>m;
        for(i=0; i<n; i++)
        {
            if(num[i]<m)
            {
                for(j=0; j<n; j++)
                {
                    if((i!=j) && (num[i]<=num[j]))
                    {
                        sum=num[i]+num[j];
                        if(sum==m)
                        {
                            dif=num[j]-num[i];
                            if(dif<mini)
                            {
                                mini=dif;
                                a=num[i];
                                b=num[j];
                            }
                        }
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %ld and %ld.\n\n",a,b);
    }

    return 0;
}
