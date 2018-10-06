#include<bits/stdc++.h>
#define MAX 100000
#define MAXI 0
#define MINI 9999999999
using namespace std;
int main()
{
    int i,j,k,l,m,n,mini,maxi,a[MAX],b[MAX],tc,ans,c;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);

        for(i=0; i<n; i++)
            scanf("%d",&b[i]);

        c = 0;
        for(i=0; i<n-1; i++)
        {
            for(k=i+1; k<n; k++)
            {
                if(a[k]>a[i])
                {
                    for(j=0; j<n; j++)
                    {
                        if(b[j]>a[k])
                        {
                            c++;
                        }
                    }

                }


            }

        }
        printf("%d\n",c);


    }


    return 0;
}
