#include<iostream>
using namespace std;
int main ()
{
    long long int i,j,k,l,m,n,sum=0;
    while(cin>>n && n!=0)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=i*i;
        }
        cout<<sum<<endl;
    }

    return 0;
}
