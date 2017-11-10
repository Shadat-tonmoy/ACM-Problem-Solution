#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,tc,x,y,z,cost,sum=0,len;
    char str[500];
    while(scanf("%d",&tc)==1)
    {
        for(l=1;l<=tc;l++)
        {
            sum=0;
            scanf("%s %lld",&str,&n);
            len = strlen(str);
            if(n<0)
                n=-n;
            //cout<<n<<endl;
            for(i=0;i<len;i++)
            {
                if(str[i]=='-')
                    continue;
                sum+=(str[i]-'0');
                if(sum>=n)
                    sum=sum%n;
                if(sum<n && i!=len-1)
                    sum=sum*10;
                else if (sum>n && i==len-1)
                    sum=sum%n;
            }
            //cout<<sum<<endl;
            if(sum==0)
            {
                printf("Case %d: divisible\n",l);
            }
            else printf("Case %d: not divisible\n",l);


        }



    }
    return 0;
}

