#include<bits/stdc++.h>
using namespace std;
double dist (double x1,double y1,double x2, double y2)
{
    return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}
int main()
{
    int i,j,k,l,m,n;
    double x1,y1,x2,y2,r,d,ans;
    while(cin>>r>>x1>>y1>>x2>>y2)
    {
        d = dist(x1,y1,x2,y2);
        //cout<<d<<endl;
        ans = ceil(d/(2*r));
        cout<<ans<<endl;


    }


    return 0;
}
