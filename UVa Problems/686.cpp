#include<bits/stdc++.h>
#define MAX 10000000
using namespace std;
bool marked[MAX];
bool taken [10000000];
void sieve()
{
    int i,j,k,l,m;
    memset(marked,true,sizeof marked);
    marked[1]=false;
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
int main()
{
    int i,j,k,l,m,n,a,b,c=0;
    sieve();
    while(cin>>n)
    {
        if(n==0)
            break;
        if(n==4)
        {
            cout<<1<<endl;
        }
        else
        {
            memset(taken,false,sizeof taken);
            c=0;
            for(i=3; i<=n; i++)
            {
                if(marked[i] && !taken[i])
                {
                    a=i;
                    b=n-a;
                    //cout<<a<<" "<<b<<endl;
                    if(marked[b])
                    {
                        c++;
                        taken[a]=true;
                        taken[b]=true;
                    }
                }
            }
            cout<<c<<endl;
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





