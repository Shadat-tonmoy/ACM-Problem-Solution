#include<bits/stdc++.h>
using namespace std;
int BigMod(int a,int b,int m)
{
    if(b==0)
        return 1;
    else if(b%2==0)
    {
        int half = BigMod(a,b/2,m);
        return (half*half)%m;
    }
    else
    {
        int part1 = a%m;
        int part2 = BigMod(a,b-1,m);
        return (part1*part2)%m;
    }
}
int main()
{
    int i,j,k,l,m,n,a,b,c,tc,sum=0,p,ans;
    while(cin>>n)
    {
        sum = 0;
        a=0;
        for(i=0;;i++)
        {
            sum+=BigMod(10,i,n);
            //cout<<sum<<endl;
            if(sum%n==0)
            {
                a=i+1;
                break;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
