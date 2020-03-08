#include<bits/stdc++.h>
#define MAX 1000000000
using namespace std;
int main()
{
    int i,j,k,l,m,n,ans,t_one,t_zero,num[105],zero,one,a,b;
    while(cin>>n)
    {
        one=0;
        zero=0;
        t_one=0;
        t_zero=0;
        for(i=0; i<n; i++)
        {
            cin>>num[i];
            if(num[i]==0)
                t_zero++;
            else t_one++;
        }
        int maxi = 0;
        for(i=0; i<n; i++)
        {
            zero=0;
            one=0;
            for(j=i; j<n; j++)
            {
                if(num[j]==0)
                    zero++;
                else one++;
                a=t_one-one;
                b=a+zero;
                if(b>maxi)
                    maxi=b;
            }
            if(n==1)
            {
                if(num[0]==1)
                    maxi=0;
                else maxi=1;
            }
        }
        cout<<maxi<<endl;
    }

    return 0;
}
