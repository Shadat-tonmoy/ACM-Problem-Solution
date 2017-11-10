#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,tc,sum1,sum2,num[5];
    while(cin>>tc)
    {

        for(l=1;l<=tc;l++)
        {
            for(i=0;i<3;i++)
                cin>>num[i];
            sort(num,num+3);
            sum1 = (num[0]*num[0])+(num[1]*num[1]);
            sum2 = num[2]*num[2];
            if(sum1==sum2)
                printf("Case %lld: yes\n",l);
            else printf("Case %lld: no\n",l);
        }

    }

    return 0;
}
