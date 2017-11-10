#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,sum=0,rem,need,price,cp;
    while(cin>>n)
    {
        sum=0;
        cp=999999999;
        for(i=0;i<n;i++)
        {
            cin>>need>>price;
            if(price<cp)
                cp=price;
            sum+=(need*cp);
        }
        cout<<sum<<endl;

    }





    return 0;

}


