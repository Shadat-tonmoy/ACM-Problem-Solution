#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
bool marked [MAX];
void sieve()
{
    int i,j,k,l,m;
    memset(marked,true,sizeof marked);
    marked[2]=true;
    marked[1]=true;
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
main()
{
    int i,j,k,l,m,n,a,b,c,w,sum=0;
    sieve();
    while(cin>>n)
    {
        for(i=4;i<=n;i++)
        {
            if(!marked[i])
            {
                m = n - i;
                if(!marked[m])
                {
                    a=i;
                    b=m;
                    break;
                }
            }
        }
        cout<<a<<" "<<b<<endl;
    }

    return 0;


}
