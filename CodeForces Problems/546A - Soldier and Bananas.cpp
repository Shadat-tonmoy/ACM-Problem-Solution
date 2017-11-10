#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,b,c,w,sum=0;
    while(cin>>k>>n>>w)
    {
        sum = 0;
        for(i=1; i<=w; i++)
        {
            sum+=i*k;
        }
        //cout<<sum<<endl;
        if(n>sum)
            cout<<0<<endl;
        else cout<<sum-n<<endl;

    }

    return 0;


}
