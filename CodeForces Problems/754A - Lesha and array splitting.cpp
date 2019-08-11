#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,num[105],up[100],low[100],part,sum;
    while(cin>>n)
    {
        sum=0;
        part=0;
        low[0]=1;
        for(i=1; i<=n; i++)
        {
            cin>>num[i];
            if(num[i]!=0)
            {
                sum+=num[i];
                if(sum==0)
                {
                    up[part]=i-1;
                    part++;
                    low[part]=i;
                    sum=num[i];

                }

            }
        }
        if(sum==0)
            cout<<"NO"<<endl;
        else
        {

            cout<<"YES"<<endl<<part+1<<endl;
            if(sum!=0)
                up[part]=n;
            for(i=0; i<=part; i++)
                cout<<low[i]<<" "<<up[i]<<endl;
        }
    }
    return 0;
}
