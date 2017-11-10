#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,even=0,odd=0,a,b;
    while(cin>>n)
    {
        even=0,odd=0;
        for(i=1;i<=n;i++)
        {
            cin>>m;
            if(m%2==0)
            {
                even++;
                a=i;
            }

            else
            {
                odd++;
                b=i;
            }
        }
        if(even==1)
            cout<<a<<endl;
        else cout<<b<<endl;
    }


    return 0;

}


