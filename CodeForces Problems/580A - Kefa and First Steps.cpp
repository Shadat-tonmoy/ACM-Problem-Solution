#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,a,b,c,maxi=0,num[100005];
    while(cin>>n)
    {
        c=0;
        maxi=0;
        for(i=0;i<n;i++)
            cin>>num[i];
        for(i=0;i<n-1;i++)
        {
            if(num[i+1]>=num[i])
            {
                 c++;
                 if(c>maxi)
                    maxi=c;
            }
            else
            {
                c=0;
            }
        }
        cout<<maxi+1<<endl;
    }

    return 0;
}
