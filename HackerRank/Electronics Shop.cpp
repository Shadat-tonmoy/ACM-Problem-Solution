#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,s,keyboard[1005],usb[1005],maxi,sum;
    bool up,down;
    char ch;
    while(cin>>s>>n>>m)
    {
        for(i=0;i<n;i++)
            cin>>keyboard[i];
        for(i=0;i<m;i++)
            cin>>usb[i];
        maxi=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                sum=keyboard[i]+usb[j];
                if(sum<=s)
                    maxi = max(sum,maxi);
            }
        }
        if(maxi==0)
            cout<<-1<<endl;
        else cout<<maxi<<endl;




    }

    return 0;
}
