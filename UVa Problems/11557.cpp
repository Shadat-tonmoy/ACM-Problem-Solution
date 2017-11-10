#include<iostream>
using namespace std;
int main ()
{
    int p,b,h,w,c_p,i,j,ans,seat[10000],f_c,mini;
    while(cin>>p>>b>>h>>w)
    {
        mini=999999;
        for(i=1; i<=h; i++)
        {
            cin>>c_p;
            if(c_p*p<=b)
                ans=1;
            else ans=0;
            for(j=0; j<w; j++)
                cin>>seat[j];
            if(ans==1)
            {
                for(j=0; j<w; j++)
                {
                    if(seat[j]>=p)
                    {
                        f_c=c_p*p;
                        if(f_c<mini)
                            mini=f_c;
                            break;
                    }
                }
            }
        }
        if(mini==999999)
            cout<<"stay home"<<endl;
        else cout<<mini<<endl;
    }

    return 0;
}
