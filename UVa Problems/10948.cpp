#include<bits/stdc++.h>
#define MAX 10000000
using namespace std;
bool marked[MAX];
int p_list[MAX];
void sieve()
{
    int i,j,k,l,m;
    memset(marked,true,sizeof marked);
    marked[0]=false;
    marked[1]=false;
    marked[2]=true;
    for(i=4;i<=MAX;i+=2)
        marked[i]=false;
    for(i=3;i*i<=MAX;i+=2)
    {
        if(marked[i])
        {
            for(j=i*i;j<=MAX;j+=i)
                marked[j]=false;
        }
    }
}
int main()
{
    int i,j,k,l,m,n,a,b;
    sieve();
    while(cin>>n)
    {
        bool found = false;
        if(n==0)
            break;
        for(i=2;i<=n;i++)
        {
            if(marked[i])
            {
                a=i;
                b=n-a;
                if(marked[b])
                {
                    found = true;
                    break;
                }

            }
        }
        if(found)
        {
            printf("%d:\n%d+%d\n",n,a,b);
        }
        else
        {
            printf("%d:\nNO WAY!\n",n);

        }
        /*for(i=n;i>=3;i--)
        {
            if(i%2!=0 && marked[i])
            {
                b=i;
                if(a+b==n)
                    break;
            }
        }*/
        //printf("%d = %d + %d\n",n,a,b);
        //cout<<a<<" "<<b<<endl;
    }






    return 0;
}





