#include<bits/stdc++.h>
using namespace std;
double calDistance(double x,double y)
{
    return sqrt((x*x) + (y*y));
}
int main()
{
    double r,d,b,x,y,ri,dis,dis2,dis3;
    int i,j,k,n,ans;
    bool found;
    while(cin>>r>>d)
    {
        ans = 0;
        b = r - d;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>x>>y>>ri;
            dis = calDistance(x,y);
            //cout<<dis<<endl;

            if(dis<=r && dis>=b)
            {
                dis2 = dis + ri;
                dis3 = dis - ri;

                //dis += ri;
                //cout<<dis<<" r : "<<r<<" b :"<<b ;
                if((dis2<=r && dis2>=b) && (dis3<=r && dis3>=b))
                {
                    ans++;
                    //printf("For this\n");

                }
            }

        }
        cout<<ans<<endl;




    }


    return 0;

}


