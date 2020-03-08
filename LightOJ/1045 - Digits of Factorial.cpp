#include<bits/stdc++.h>
using namespace std;
double a[1000000];
int main()
{
    long long int i,j,k,l,m,n,b,tc,num,ans;
    double sum=0,x,y=0,tmp,base;
    for(i=1; i<=1000050; i++)
    {
        sum+=log10((double)i);
        a[i]=sum;
    }
    scanf("%lld",&tc);
    for(l=1; l<=tc; l++)
    {
        scanf("%lld %lf",&num,&base);
        if(num==0)
            ans=1;
        else
        {
            //cout<<num<<endl;
            //cout<<"direct "<<a[num]<<endl;
            //cout<<"y : "<<y<<endl;
            if(base!=10)
            {
                x = a[num] / log10(base);
                //cout<<"if not 10 at "<<a[num]<<endl;
            }

            else
            {
                x = a[num];
            }

            //cout<<x<<endl;
            ans = (long long int)x+1;
            //cout<<ans<<endl;*/
            //cout<<"Num : "<<num<<endl;
            //cout<<"direct at "<<a[num]<<endl;

        }
        printf("Case %lld: %lld\n",l,ans);

    }


    return 0;
}
