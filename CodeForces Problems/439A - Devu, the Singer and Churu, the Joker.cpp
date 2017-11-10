#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int i,j,k,l,m,n,c,ans,a,b,digits[100];
    while(cin>>n>>m)
    {
        int sum = 0;
        ans=0;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            sum+=a;
        }
        sum+=((n-1)*10);
        //cout<<sum<<endl;
        if(sum>m)
            ans=-1;
        else
        {
            c=m-sum;
            if(c>=5)
            {
                ans+=c/5;
            }
            ans+=((n-1)*10)/5;
        }
        cout<<ans<<endl;







    }





    return 0;

}


