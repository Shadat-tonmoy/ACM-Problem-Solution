#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,h;
    char ch;
    double angle;
    while(cin>>h>>ch>>m)
    {
        if(h==0 && m==0)
            break;
        angle = fabs((double)0.5 * ((double)h*60.0 - (double)m*11.0));
        if(angle>180)
            angle = (double)360 - (double)angle;
        printf("%.3lf\n",angle);
    }
    return 0;
}
