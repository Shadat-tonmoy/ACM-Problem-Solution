#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,tc,one,w,tmp,rev;
    while(cin>>tc)
    {

        for(l=1;l<=tc;l++)
        {
            cin>>n;
            rev=0;
            tmp=n;
            while(n!=0)
            {
                rev=rev*10;
                rev+=n%10;
                n=n/10;
            }
            if(rev==tmp)
                printf("Case %d: Yes\n",l);
            else printf("Case %d: No\n",l);





        }

    }

    return 0;
}
