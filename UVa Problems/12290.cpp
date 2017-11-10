#include<bits/stdc++.h>
using namespace std;
bool found(long long int n)
{
    long long int f,i,j,k;
    while(n!=0)
    {
        f = n%10;
        if(f==7)
        {
            return true;
            break;
        }
        n = n/10;
    }
    return false;
}
int main ()
{
    long long int i,j,k,l,m,n,num,clap[10000];
    while(cin>>n>>m>>k)
    {
        if(n==0 && m==0 && k==0)
            break;
        num=0;
        memset(clap,0,sizeof clap);
        int flag = 0;
        for(i=0; ; )
        {
            while(i<n)
            {
                i++;
                num++;
                if(num%7==0 || found(num))
                {
                    clap[i]++;
                }
                if(clap[m]==k)
                {
                    flag = 1;
                    cout<<num<<endl;
                    break;
                }

            }
            if(flag==1)
                break;
            while(i>1)
            {
                i--;
                num++;
                if(num%7==0 || found(num))
                {
                    clap[i]++;
                }
                if(clap[m]==k)
                {
                    flag = 1;
                    cout<<num<<endl;
                    break;
                }
            }
            if(flag==1)
                break;
        }
    }

    return 0;
}
