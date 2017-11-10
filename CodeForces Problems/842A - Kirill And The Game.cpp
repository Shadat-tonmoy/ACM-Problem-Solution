#include<bits/stdc++.h>
using namespace std;
int main()
{
    double j,k,l,m,n,a,b,c,d,r,x,y;
    double div;
    long long int i;
    bool found;
    while(cin>>l>>r>>x>>y>>k)
    {
        found = false;
        for(i=l;i<=r;i++)
        {
            div = (double) i / k;
            int tmp = div;
            if ( div >= (double)x && div<= (double)y && tmp == div)
            {
                //cout<<tmp<<endl;
                found = true;
                break;
            }

        }
        if(found)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;




    }


    return 0;

}
