#include<bits/stdc++.h>
using namespace std;
int sum (int n)
{
    if(n==0)
        return 0;
    else return n+sum(n-1);
}
main()
{
    int i,j,k,l,m,n,r,c,total = 0;
    while(cin>>n)
    {
        total = 0;
        for(i=1;i<=n;i++)
        {
            total += sum(i);
            m = total;
            if(m+sum(i+1)>n)
                break;
        }
        cout<<i<<endl;
    }
    return 0;

}


