#include<bits/stdc++.h>
using namespace std;
int lower[100005],upper[100005];
int main()
{
    int i,j,k,l,m,n,a,b,c,cnt,lo,hi,q,mid;
    while(scanf("%d",&n)==1)
    {
        cnt=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&m);
            cnt++;
            lower[i]=cnt;
            cnt--;
            cnt+=m;
            upper[i]=cnt;
        }
        //for(i=1;i<=n;i++)
          //  cout<<lower[i]<<" "<<upper[i]<<endl;
        scanf("%d",&q);
        bool found = false;
        for(l=1;l<=q;l++)
        {
            scanf("%d",&a);
            lo=1;
            hi=n;
            mid=(hi+lo)/2;
            while(hi>=lo)
            {
                //cout<<"mid : "<<mid<<endl;
                if(a>=lower[mid] && a<=upper[mid])
                {
                    printf("%d\n",mid);
                    break;
                }
                if(a<lower[mid])
                    hi=mid-1;
                else if(a>upper[mid])
                    lo=mid+1;
                mid=(lo+hi)/2;
            }
        }

    }

    return 0;
}
