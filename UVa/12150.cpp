#include<bits/stdc++.h>
using namespace std;
int c_no[2000000],pos[2000000],ne[2000000];
int main()
{
    int i,j,k,l,m,n,a,b,c,p;
    while(cin>>n)
    {
        if(n==0)
            break;
        a=0;
        bool found = true;
        memset(ne,-1,sizeof ne);
        for(i=1;i<=n;i++)
        {
            cin>>c_no[i]>>pos[i];
            a = a + pos[i];
        }
        if(a==0)
        {
            for(i=1;i<=n;i++)
            {
                p = pos[i];
                if(ne[p+i]==-1)
                    ne[i+p]=c_no[i];
                else
                {
                    found = false;
                    break;
                }
            }
            if(found)
            {
                for(i=1;i<=n;i++)
                {
                    if(i==n)
                        cout<<ne[i]<<endl;
                    else cout<<ne[i]<<" ";
                }
            }
            else cout<<-1<<endl;
        }
        else cout<<-1<<endl;



    }
    return 0;
}
