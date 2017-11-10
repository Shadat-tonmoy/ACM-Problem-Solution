#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int c,f,i,j,t;
    double ans,c_f,f_t;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>c>>f;
            c_f = (double)9/5*c+32;
            f_t = (double)c_f+f;
            ans = (double)(5*(f_t-32)/9);
            printf("Case %d: %.2lf\n",i,ans);
        }
    }

    return 0;
}
