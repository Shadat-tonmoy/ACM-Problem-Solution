#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int i,ans,n,num[10000],count=0,t=1;
    while(cin>>n && n!=0)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
            if(num[i]==0)
                count++;
        }
        ans = n-(2*count);
        printf("Case %d: %d\n",t,ans);
        t++;
    }
    return 0;
}
