#include<iostream>
using namespace std;
int trim (int n)
{
    int sum=0,i,j,k,l;
    while(n!=0)
    {
        sum = sum + (n%10);
        n=n/10;
    }
    return sum;
}
int main ()
{
    int i,j,k,l,m,n,a,b,c,ans,t;
    while(cin>>t)
    {
        for(j=1; j<=t; j++)
        {
            cin>>n;
            m=n-50;
            c=0;
            for(i=m; i<=n; i++)
            {
                a = trim(i);
                b = a+i;
                if(b==n)
                {
                    c++;
                    ans=i;
                    break;
                }
            }
            if(c==0)
                cout<<"0"<<endl;
            else if (c==1)
                cout<<ans<<endl;
        }

    }

    return 0;
}
