#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int i,j,k,l,m,n,num[100000],a,b,x,y,z,sum=0;
    while(cin>>n>>m)
    {
        sum=0;
        for(i=0;i<m;i++)
            cin>>num[i];
        sum+=num[0]-1;
        a = num[0];
        for(i=1;i<m;i++)
        {
            b = num[i];
            if(b<a)
            {
                sum+=(n-a+b);
                a=b;
            }
            else
            {
                sum+=(b-a);
                a=b;
            }
        }
        cout<<sum<<endl;
    }


    return 0;

}


