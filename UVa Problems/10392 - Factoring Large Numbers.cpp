#include<bits/stdc++.h>
using namespace std;
#define MAX 5000001
bool marked [MAX];
long long int p_list [MAX];
void sieve ()
{
    long long int i,j,k;
    marked[1]=true;
    for(i=4;i<=MAX;i+=2)
        marked[i]=true;
    for(i=3;i*i<=MAX;i+=2)
    {
        if(!marked[i])
        {
            for(j=i*i;j<=MAX;j+=i)
                marked[j]=true;
        }
    }
    k=0;
    for(i=1;i<=MAX;i++)
    {
        if(!marked[i])
            p_list[k++]=i;
    }
    for(i=0;i<k;i++)
      cout<<p_list[i]<<endl;
}
int main()
{
    sieve();
    long long int n;
    int i;
    while(scanf("%lld",&n)==1)
    {
        if(n==-1)
            break;
        for(i=0;p_list[i]*p_list[i]<=n;i++)
        {
            if(n%p_list[i]==0)
            {
                while(n%p_list[i]==0)
                {
                    printf("    %lld\n", p_list[i]);
                    n = n/p_list[i];
                }

            }
        }
        if(n!=0)
            printf("    %lld\n",n);

        printf("\n");
    }
    return 0;
}

