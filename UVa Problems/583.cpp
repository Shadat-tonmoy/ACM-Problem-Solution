#include<bits/stdc++.h>
using namespace std;
int fact[100000];
bool prime[100000];
int lis[100000],plist[100000];
int s;
void sieve()
{
    int i,j,n,m;
    n=sqrt(100000);
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(i=2; i<=n; i++)
    {
        if(prime[i])
        {
            for(j=i*2; j<=100000; j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(i=2,j=0; i<=100000; i++)
    {
        if(prime[i])
        {
            lis[j]=i;
            j++;
        }
    }

}
void factor(int num)
{
    int i,j,k,n,m;
    n=sqrt(num);
    s=0;
    for(i=0; lis[i]<=n; i++)
    {
        if(num%lis[i]==0)
        {
            while(num%lis[i]==0)
            {
                fact[s]=lis[i];
                num=num/lis[i];
                s++;
            }
        }
    }
    if(num>1)
    {
        fact[s]=num;
        s++;
    }
}
int main()
{
    sieve();
    int n,m,i,j,ck;
    while(scanf("%d",&n)==1 && n!=0)
    {
        m=n;
        ck=0;
        factor(abs(n));
        printf("%d = ",m);
        if(m<0)
        {
            printf("-1");
            ck=1;
        }
        for(i=0; i<s; i++)
        {
            if(ck==1)
            {
                printf(" x ");
                ck=0;
            }
            printf("%d",fact[i]);
            if(i!=s-1)
            {
                printf(" x ");
            }
        }
        printf("\n");
    }
    return 0;
}
