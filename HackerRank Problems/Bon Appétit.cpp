#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,sum,refund,bill;
    while(cin>>n>>k)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(i!=k)
                sum+=a;
        }
        cin>>bill;
        if(bill==(sum/2))
            cout<<"Bon Appetit"<<endl;
        else
        {
            cout<<bill-(sum/2)<<endl;
        }

    }

    return 0;
}
