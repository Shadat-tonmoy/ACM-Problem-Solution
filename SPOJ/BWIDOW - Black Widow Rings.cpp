#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,inner[1000],outer[1000],inner_max,tc,pos;
    bool ok;
    while(cin>>tc)
    {
        for(l=1;l<=tc;l++)
        {
            ok=true;
            inner_max=0;
            cin>>n;
            for(i=0;i<n;i++)
            {
                cin>>inner[i]>>outer[i];
                if(inner[i]>inner_max)
                {
                    inner_max=inner[i];
                    pos=i;
                }

            }
            for(i=0;i<n;i++)
            {
                if(i!=pos && outer[i]<inner_max)
                    ok=true;
                else if (i!=pos && outer[i]>=inner_max)
                {
                    ok=false;
                    break;

                }
            }
            if(ok)
                cout<<pos+1<<endl;
            else cout<<-1<<endl;
        }
    }





    return 0;
}
