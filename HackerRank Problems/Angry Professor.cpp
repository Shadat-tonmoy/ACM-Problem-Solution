#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,s,threshold,present,tc;
    while(cin>>tc)
    {
        for(j=0;j<tc;j++)
        {
            cin>>n>>threshold;
            present = 0;
            for(i=0;i<n;i++)
            {
                cin>>a;
                if(a<=0)
                    present++;
            }
            if(present<threshold)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;


        }
    }


    return 0;
}
