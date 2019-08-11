#include<bits/stdc++.h>
using namespace std;
int findAns(int);
int main()
{
    int i,j,k,l,p,m,n,a,tc,ans;
    while(cin>>tc)
    {
        for(i=0;i<tc;i++)
        {
            cin>>n;
            ans = findAns(n);
            cout<<ans<<endl;
        }
    }
    return 0;
}
int findAns(int n)
{
    int tmp = n,c=0,a;
    while(tmp!=0)
    {
        a = tmp%10;
        if(a>0)
            c = (n%a==0) ? c+1 : c;
        tmp/=10;
    }
    return c;
}
