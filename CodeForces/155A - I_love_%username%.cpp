#include<bits/stdc++.h>
using namespace std;
//#define long long int lli
main()
{
    long long  i,j,k,l,m,n,mini,maxi,c,x;
    while(cin>>n)
    {
        c=0;
        cin>>x;
        mini=x;
        maxi=x;
        for(i=1;i<n;i++)
        {
            cin>>x;
            if(x>maxi)
            {
                c++;
                maxi=x;
            }
            else if (x<mini)
            {
                c++;
                mini=x;
            }
        }
        cout<<c<<endl;
    }





    return 0;

}


