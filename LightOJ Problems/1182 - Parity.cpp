#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,tc,one;
    while(cin>>tc)
    {

        for(l=1;l<=tc;l++)
        {
            one=0;
            cin>>n;
            while(n!=0)
            {
                if(n%2==1)
                    one++;
                n=n/2;
            }
            if(one%2==0)
                printf("Case %d: even\n",l);
            else printf("Case %d: odd\n",l);



        }

    }

    return 0;
}
