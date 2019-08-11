#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int i,j,k,l,m,n,sum=0;
    while(cin>>n)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>m;
                if(j==1)
                    m=-m;
                sum+=m;
            }
        }
        if(sum==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
