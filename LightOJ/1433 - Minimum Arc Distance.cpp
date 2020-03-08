#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    long long int i,j,k,l,m,n,tc,dis;
    double cx,cy,ax,ay,bx,by,r,ang,m1,m2,ans,a,b,c;
    while(scanf("%lld",&tc)==1)
    {
        for(l=1;l<=tc;l++)
        {
            scanf("%lf %lf %lf %lf %lf %lf",&cx,&cy,&ax,&ay,&bx,&by);
            a = sqrt((cx-ax)*(cx-ax)+((cy-ay)*(cy-ay)));
            b = sqrt((cx-bx)*(cx-bx)+((cy-by)*(cy-by)));
            c = sqrt((ax-bx)*(ax-bx)+((ay-by)*(ay-by)));
            ang = acos((a*a+b*b-c*c)/(2*a*b));
            //cout<<ang<<endl;
            r = a;
            //cout<<r<<endl;
            ans = ang*r;
            //cout<<ans<<endl;
            printf("Case %lld: %lf\n",l,ans);




        }
    }



    return 0;
}
