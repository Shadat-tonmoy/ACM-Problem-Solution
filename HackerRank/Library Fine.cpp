#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,p,m,n,a,b,tc,ans,d1,m1,y1,d2,m2,y2,yDiff,mDiff,dDiff;
    while(cin>>d2>>m2>>y2>>d1>>m1>>y1)
    {
        yDiff = y2-y1;
        mDiff = m2-m1;
        dDiff = d2-d1;
        if(yDiff>0)
            ans = 10000;
        else if(yDiff<0)
            ans = 0;
        else if(mDiff>0)
            ans = mDiff*500;
        else if(mDiff<0)
            ans = 0;
        else if(dDiff>0)
            ans = dDiff*15;
        else if(dDiff<=0)
            ans = 0;
        cout<<ans<<endl;

    }
    return 0;
}
