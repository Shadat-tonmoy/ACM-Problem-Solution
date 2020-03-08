#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,num[110],a,b,pos,sum;
    while(cin>>n>>pos)
    {
        sum=0;
        for(i=1;i<=n;i++)
            cin>>num[i];
        m = max(abs(1-pos),abs(n-pos));
        //cout<<m<<endl;
        for(i=0;i<=m;i++)
        {
            a = pos-i;
            b = pos+i;
            if((a>0 && b>0) && (a<=n && b<=n) )
            {
                if(a!=b && (num[a]>0 && num[b]>0))
                {
                    sum+=num[a];
                    sum+=num[b];
                }
                else if (a==b && (num[a]>0))
                    sum+=num[a];

            }
            else
            {
                if(a>0 && a<=n && num[a]>0)
                    sum+=num[a];
                else if (b>0 && b<=n && num[b]>0)
                    sum+=num[b];
            }


        }
        cout<<sum<<endl;
    }
    return 0;
}
