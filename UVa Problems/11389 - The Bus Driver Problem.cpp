#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,tc,q,mor[10000],eve[10000],sum,d,r;
    while(scanf("%d %d %d",&n,&d,&r)==3)
    {
        if(n==0 && d==0 && r==0)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&mor[i]);
        for(i=0;i<n;i++)
            scanf("%d",&eve[i]);
        sum=0;
        sort(mor,mor+n);
        sort(eve,eve+n);
        int c=0;
        for(i=0,j=n-1;i<n;i++,j--)
        {
            tc = mor[i]+eve[j];
            if(tc>d)
            {
                sum+=(tc-d)*r;
            }
        }
        printf("%d\n",sum);
    }







    return 0;
}

