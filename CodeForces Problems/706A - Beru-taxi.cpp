#include<bits/stdc++.h>
using namespace std;
double calDistance(double x1,double y1, double x2, double y2)
{
    return sqrt(abs(x1-x2) * abs(x1-x2) + abs(y1-y2) * abs(y1-y2));
}
int main()
{
    long long int i,j,k,l,m,n;
    char ch;
    double a,b,x,y,v,distance,time,min_time;
    while (cin>>a>>b>>n)
    {
        min_time = 99999999999999;
        //cout<<min_time<<endl;
        for(i=0;i<n;i++)
        {
            cin>>x>>y>>v;
            distance = calDistance(a,b,x,y);
            time = distance / v;
            min_time = min(time,min_time);
        }
        printf("%.9f\n",min_time);
    }

    return 0;

}
