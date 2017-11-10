#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,len,c=0,num[100000],a,b;
    while(cin>>n>>k)
    {
        c=0;
        for(i=1;i<=n;i++)
            cin>>num[i];
        if(num[k]>0)
        {
            a = num[k];
            for(i=1;i<=n;i++)
            {
                if(num[i]>=a)
                    c++;
                else break;
            }
        }
        else
        {
            a = num[k];
            for(i=1;i<=n;i++)
            {
                if(num[i]>0)
                    c++;
                else break;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
