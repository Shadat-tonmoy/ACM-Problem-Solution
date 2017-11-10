#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,f,r,t_f[1000],t_r[1000],a=0;
    double ra[10000],ratio_a,div,maxi=0.0;
    while(cin>>f)
    {
        if(f==0)
            break;
        cin>>r;
        a=0;
        maxi = 0.0;
        for(i=0; i<f; i++)
            cin>>t_f[i];
        for(i=0; i<r; i++)
            cin>>t_r[i];
        for(i=0; i<f; i++)
        {
            for(j=0; j<r; j++)
            {
                ratio_a = (double)t_r[j]/t_f[i];
                ra[a++] = ratio_a;
            }
        }
        sort(ra,ra+a);
        for(i=0; i<a-1; i++)
        {
            div = (double)ra[i+1]/ra[i];
            if(div>maxi)
                maxi=div;
        }
        printf("%.2lf\n",maxi);
    }



    return 0;
}
