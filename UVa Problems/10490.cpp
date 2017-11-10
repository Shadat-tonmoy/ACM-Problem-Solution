#include<bits/stdc++.h>
using namespace std;
#define MAX 100
bool marked [MAX];
void sieve ()
{
    int i,j,k,l,m,n;
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
long long int power(long long int a,long long int b)
{
    long long int i,j,k,sum=a;
    for(i=1; i<b; i++)
        sum = sum*a;
    return sum;
}
bool balfect(int n)
{
    if((n>=19 && n<=31) && (n==31 || n==19))
        return true;
    else if(n>=19 && n<=31)
        return false;
}
bool isPerfect(long long int n)
{
    long long int i,j,k,l,m,sum=0;

    for(i=1; i*i<=n; i++)
    {
        if(i==1)
            sum+=i;//div.push_back(i);
        else if(n%i==0)
        {
            if(i!=n/i)
            {
                sum+=i;
                sum+=n/i;
                //div.push_back(i);
                //div.push_back(n/i);
            }
            else sum+=i;//div.push_back(i);
        }
    }
    //for(i=0; i<div.size(); i++)
    //sum+=div[i];
    //cout<<sum<<endl;
    if(sum==n)
        return true;
    else return false;
}
int main()
{
    long long int i,j,k,l,m,n,a,b;
    sieve();
        /*while(cin>>a>>b)
    {
        int ans = power(a,b);
        cout<<ans<<endl;
    }*/
    while(cin>>n)
    {
        if(n==0)
            break;
        if(n<19)
        {
            a = power(2,n-1)*(power(2,n)-1);
            //cout<<a<<endl;
            if(isPerfect(a))
            {
                printf("Perfect: %lld!\n",a);
            }
            else
            {
                if(marked[n])
                    printf("Given number is prime. But, NO perfect number is available.\n");
                else printf("Given number is NOT prime! NO perfect number is available.\n");
            }
        }
        else
        {
            a = power(2,n-1)*(power(2,n)-1);
            if(balfect(n))
            {
                printf("Perfect: %lld!\n",a);
            }
            else
            {
                if(marked[n])
                    printf("Given number is prime. But, NO perfect number is available.\n");
                else printf("Given number is NOT prime! NO perfect number is available.\n");
            }


        }
        /*cout<<a<<endl;
        if(isPerfect(a))
            cout<<"yess"<<endl;
        else cout<<"No"<<endl;*/
    }
    return 0;
}
