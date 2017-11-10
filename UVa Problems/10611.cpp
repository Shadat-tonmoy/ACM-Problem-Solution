#include<bits/stdc++.h>
using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define PI acos(-1.0)

#define MOD 1000000007
#define MX 100010
int main ()
{
    long long int i,a,j,k,l,n,num[50000],q,maxi,mini,h,lower,upper,mid,h_max,h_min;
    while(cin>>n)
    {
        maxi=0;
        mini=999999999999999;
        for(i=0; i<n; i++)
        {
            cin>>num[i];
            if(num[i]<mini)
                mini=num[i];
            if(num[i]>maxi)
                maxi=num[i];
        }

        cin>>q;
        for(l=1; l<=q; l++)
        {
            a=0;
            h_min=999999999999999;
            h_max=0;
            cin>>h;
            if(n==1 && h==num[0])
                cout<<"X "<<"X"<<endl;
            else if(h<num[0])
                printf("X %d\n", num[0]);
            else if(h==num[0])
                printf("X %lld\n", num[1]);
            else if(h>num[n-1])
                printf("%lld X\n", num[n-1]);
            else if(h==num[n-1])
                printf("X %lld\n", num[n-2]);

            else
            {
                lower=0;
                upper=n-1;
                mid=(lower+upper)/2;
                while(lower<=upper)
                {
                    if(num[mid]==h)
                    {
                        h_max=num[mid-1];
                        h_min=num[mid+1];
                        break;
                    }
                    else if(num[mid]<h)
                    {
                        lower=mid+1;
                        if(num[mid]>h_max)
                            h_max=num[mid];
                    }
                    else if(num[mid]>h)
                    {
                        upper=mid-1;
                        if(num[mid]<h_min)
                            h_min=num[mid];
                    }
                    mid=(lower+upper)/2;
                }
                printf("%lld %lld\n",h_max,h_min);
            }
        }
    }

    return 0;
}
