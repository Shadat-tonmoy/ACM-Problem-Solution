#include<bits/stdc++.h>
using namespace std;
int revNum(int num)
{
    int n = 0;
    while(num!=0)
    {
        n*=10;
        n+=(num%10);
        num/=10;
    }
    return n;
}
int main()
{
    int i,j,k,l,m,n,a,b,c,s,tc;
    while(cin>>i>>j>>k)
    {
        b=0;
        for(a=i;a<=j;a++)
        {
            m = a;
            n = revNum(a);
            if(abs(m-n)%k==0)
                b++;
        }
        cout<<b<<endl;
    }


    return 0;
}
