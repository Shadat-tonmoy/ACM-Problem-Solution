#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int i,j,k,l,t,n,m,h,num[10000];
    while(cin>>t)
    {
        for(m=1;m<=t;m++)
        {
            h=0;
            l=0;
            cin>>n;
            for(i=0;i<n;i++)
                cin>>num[i];
            for(i=0;i<n-1;i++)
            {
                if(num[i]>num[i+1])
                    l++;
                else if(num[i]<num[i+1])
                    h++;
            }
            printf("Case %d: %d %d\n",m,h,l);
        }
    }

    return 0;
}
