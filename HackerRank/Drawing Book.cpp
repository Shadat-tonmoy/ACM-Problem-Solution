#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,sum,refund,way1,way2;

    while(cin>>a>>b)
    {
        if(b%2==0)
        {
            way1 = ((b-1)/2)+1;
        }
        else
        {
            way1 = (b-1)/2;
        }
        if(a%2==0)
        {
            if(b%2==1)
                way2 = ((a-b)/2)+1;
            else way2 = (a-b)/2;
        }
        else
        {
            way2 = (a-b)/2;
        }
        sum = min(way1,way2);
        cout<<sum<<endl;


    }

    return 0;
}
