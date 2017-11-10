#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int ax,ay,bx,by,cx,cy,dx,dy,i,j,k,l,m,l1,l2,l3,ans;
    while(cin>>ax>>ay>>bx>>by>>cx>>cy)
    {
        dy=cy;
        l1 = ((cx-bx)*(cx-bx))+((cy-by)*(cy-by));
        cout<<l1<<endl;
        l2 = (ay-dy)*(ay-dy);
        cout<<l2<<endl;
        if(l1>l2)
            l3 = sqrt(l1-l2);
        else l3 = sqrt(l2-l1);
        cout<<l3<<endl;;
        ans = l3 - ax;
        cout<<ans<<" "<<dy<<endl;

    }

return 0;
}
