#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
bool marked[MAX];
void sieve()
{
    int i,j,k,l,m;
    memset(marked,true,sizeof marked);
    marked[1]=false;
    marked[2]=true;
    for(i=4; i<=MAX; i+=2)
        marked[i]=false;
    for(i=3; i*i<=MAX; i+=2)
    {
        if(marked[i])
        {
            for(j=i*i; j<=MAX; j+=i)
                marked[j]=false;
        }
    }
}
int nod(int n)
{
    int i,j,k,l,m,c=0;
    for(i=1; i<=n/2; i++)
    {
        if(n%i==0)
            c++;
    }
    c++;
    return c;
}
int main()
{
    int i,j,k,l,m,n,num[1007],div[1007];
    sieve();
    for(i=1; i<=1000; i++)
        num[i]=i;
    for(i=1; i<=1000; i++)
    {
        if(marked[i])
            div[i]=2;
        else
        {
            div[i]=nod(i);
        }
    }
    //for(i=1;i<=1000;i++)
    // printf("%d : %d\n",num[i],div[i]);
    for(i=1; i<=1000; i++)
    {
        for(j=i+1; j<=1000; j++)
        {
            if(div[i]>div[j])
            {
                swap(num[i],num[j]);
                swap(div[i],div[j]);
            }
            else if(div[i]==div[j] && num[j]>num[i])
            {
                swap(num[i],num[j]);
                swap(div[i],div[j]);

            }

        }
    }
    while(cin>>m)
    {
        for(i=1;i<=m;i++)
        {
            cin>>n;
            printf("Case %d: %d\n",i,num[n]);
        }

    }

    return 0;
}
