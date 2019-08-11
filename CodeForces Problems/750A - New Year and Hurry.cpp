#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,a,b,c,sum;
    while(cin>>n>>k)
    {
        sum=k;
        for(i=1;i<=n;i++)
        {
            m = i*5;
            if(sum+m <= 240)
            {
                sum+=m;
                a=i;
            }
            else break;

        }
        cout<<a<<endl;
    }


    return 0;

}


