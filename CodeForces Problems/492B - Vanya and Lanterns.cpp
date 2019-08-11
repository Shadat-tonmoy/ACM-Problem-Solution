#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    double dis,num[10000],a,b,maxdis,c,ans;
    while(cin>>n>>l)
    {
        maxdis=0;
        for(i=0;i<n;i++)
            cin>>num[i];
        sort(num,num+n);
        for(i=0;i<n-1;i++)
        {
            dis = num[i+1]-num[i];
            if(dis>maxdis)
                maxdis=dis;
        }
        a = num[0]-0;
        b = l-num[n-1];
        c = max(a,b);
        ans = max(c,maxdis/2);
        printf("%.6lf\n",ans);

    }




    return 0;
}
