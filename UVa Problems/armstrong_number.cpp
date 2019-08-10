#include<bits/stdc++.h>
using namespace std;
long long int power(long long int a,long long int b)
{
    long long int ans = a;
    long long int i;
    for(i=1; i<b; i++)
        ans = ans*a;
    return ans;
}
int main()
{
    long long int i,j,k,l,m,n,sum,a=0,dig[1000],t;
    while(cin>>t)
    {
        for(m=1; m<=t; m++)
        {
            cin>>n;
            sum = 0;
            a = 0;
            long long int digit = 0;
            long long int tmp_arm = n;
            long long int tmp = n;
            while(tmp!=0)
            {
                dig[a++] = tmp%10;
                tmp = tmp / 10;
                digit ++;
            }
            for(i=0; i<a; i++)
            {
                sum = sum + power(dig[i],digit);
            }
            if(sum == n)
                printf("Armstrong\n");
            else printf("Not Armstrong\n");
        }

    }
}
