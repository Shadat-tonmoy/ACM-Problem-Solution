#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,tc,c,a,r_a,r_b,num[1000],simple,page,p;
    while(cin>>n>>k)
    {
        for(i=0;i<n;i++)
            cin>>num[i];
        page=1;
        simple=0;
        for(i=0;i<n;i++)
        {
            if(num[i]>k)
            {
                p = num[i]/k;
                if(num[i]%k>0)
                    p++;
            }
            else p=1;
            for(j=1;j<=p;j++)
            {
                a = j*k;
                r_a = j;
                if(a<=num[i])
                    r_b = a;
                else r_b = num[i];
                if(page>=r_a && page<=r_b)
                    simple++;
                page++;
            }

        }
        cout<<simple<<endl;
    }
    return 0;
}
