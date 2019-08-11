#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,tc,c,pa,ch;
    while(cin>>tc)
    {
        for(l=1;l<=tc;l++)
        {
            cin>>n>>c>>m;
            ch = n/c;
            pa = ch;
            //cout<<pa<<endl;
            while(pa>=m)
            {
                //cout<<pa/m<<" "<<pa%m<<endl;
                ch+=(pa/m);
                pa =((pa/m) + (pa%m));
                //pa = pa/m;
                //cout<<pa<<endl;
            }
            cout<<ch<<endl;

        }
    }
    return 0;
}
