#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,cb=0,ans,b,c,maxi,mini,cb_ar[1000],cx;
    char str[10000];
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        getchar();
        mini=99999;
        ans=0;
        for(m=1;m<=n;m++)
        {
            cb=0;
            gets(str);
            l=strlen(str);
            for(i=0;i<l;i++)
            {
                //scanf("%c",&str[i]);
                if(str[i]=='X')
                    cb++;
            }
            //cout<<cb<<endl;
            cx = 25-cb;
            if(cx<mini)
                mini=cx;
            cb_ar[m]=cx;
        }
        for(i=1;i<=n;i++)
        {
            //cout<<cb_ar[i]<<" ";
            ans = ans + (cb_ar[i]-mini);
        }
        //cout<<endl<<mini<<endl;
        cout<<ans<<endl;
    }

    return 0;
}
