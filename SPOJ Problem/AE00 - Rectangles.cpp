#include<bits/stdc++.h>
using namespace std;
int divisors (int n)
{
    int i,j,k,l,m,c=0;
    bool visited[10000]={0};
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    return c;
}
int main()
{
    int i,j,k,l,m,n,a,b,c,d,sum;
    while(cin>>n)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            //cout<<divisors(i)<<endl;
            sum+=divisors(i);
        }
        cout<<sum<<endl;

    }



    return 0;
}
