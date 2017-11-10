#include<bits/stdc++.h>
using namespace std;
#define MAX 100000000
bool marked[MAX];
int phi [MAX];
void sieve_phi()
{
    int i,j;
    memset(marked,true,sizeof marked);
    for(i=1;i<=MAX;i++)
        phi[i]=i;
    marked[1]=false;
    marked[2]=true;
    phi[1]=1;
    phi[2]=1;
    for(i=4;i<=MAX;i+=2)
    {
        marked[i]=false;
        phi[i]=phi[i]/2;
    }
    for(i=3;i<=MAX;i+=2)
    {
        if(marked[i])
        {
            phi[i]=phi[i]-1;
            for(j=2*i;j<=MAX;j+=i)
            {
                phi[j]=phi[j]/i * (i-1);
                marked[j]=false;
            }
        }
    }
}
int main()
{
    sieve_phi();
    int i,j,k,l,m,n;
    while(cin>>n)
    {
        //printf("Co-Factors of %d is ",n);
        cout<<phi[n]<<endl;
    }
    return 0;
}
