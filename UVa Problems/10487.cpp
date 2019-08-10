#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n,a,num[10000],q,t=1;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
            cin>>num[i];
        cin>>q;
        printf("Case %d:\n",t);
        for(m=1;m<=q;m++)
        {
            int min_dif = 9999999;
            int dif,ans;
            cin>>a;
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i!=j)
                    {
                        dif = fabs(a-(num[i]+num[j]));
                        if(dif<min_dif)
                        {
                            min_dif = dif;
                            ans = num[i]+num[j];
                        }

                    }
                }
            }
            printf("Closest sum to %d is %d.\n",a,ans);
        }
        t++;
    }
    return 0;
}
