#include<bits/stdc++.h>
using namespace std;
bool no_rpt (long long int n)
{
    long long int dig[10000],a,flag;
    long long int i,j;
    a=0;
    flag = 0;
    long long int tmp = n;
    while(tmp != 0)
    {
        dig[a++]=tmp%10;
        tmp=tmp/10;
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            if(i!=j && dig[i]==dig[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        return false;
    else if(flag==0)
        return true;
}
int main ()
{
    long long int i,j,k,l,m,n,a,b,c,t,s1,s2;
    //a = 999999999999999999;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n;
            for(j=1;j<=9876543210;j++)
            {
                a = n*j;
                if(no_rpt(a))
                {
                    printf("%lld / %lld = %lld\n",a,j,n);
                }
            }
        }

    }


    return 0;
}
