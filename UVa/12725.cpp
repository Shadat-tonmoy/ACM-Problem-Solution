#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int a,b,t,i,j,k;
    double n,m,ans;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n>>m>>a>>b;
            ans = ((m*(double)(a+b))-(n*(double)a))/b;
            if(ans==0)
                printf("Case #%d: %.2lf\n",i,ans);
            else if(ans>0 && ans<=10)
            {
                printf("Case #%d: %.2lf\n",i,ans);
            }
            else printf("Case #%d: Impossible\n",i);
        }
    }

    return 0;
}
