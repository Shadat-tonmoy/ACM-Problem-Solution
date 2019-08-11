#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,num[1000],sum=0,total=0,c=0,rem;
    while(cin>>n)
    {
        sum = 0;
        total = 0;
        c = 0;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
            total+=num[i];
        }
        sort(num,num+n);
        for(i=n-1;i>=0;i--)
        {
            sum+=num[i];
            rem = total - sum;
            c++;
            if(rem<sum)
                break;
        }
        cout<<c<<endl;
    }
    return 0;
}
