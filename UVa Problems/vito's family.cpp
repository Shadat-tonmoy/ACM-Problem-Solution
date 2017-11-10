#include<iostream>
#include<cstdlib>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,t,a,b,c,num[30005],sum=0,mini;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            mini=9999999999;
            cin>>n;
            for(int i=0;i<n;i++)
                cin>>num[i];
            for(j=0;j<n;j++)
            {
                sum=0;
                for(k=0;k<n;k++)
                {
                    sum=sum+(abs(num[j]-num[k]));
                }
                if(sum<=mini)
                    mini=sum;
            }
            cout<<mini<<endl;
            //sum=0;
        }
    }

    return 0;
}
