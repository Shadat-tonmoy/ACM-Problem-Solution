#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,tc,sum=0,a,b,c;
    string command;
    while(cin>>tc)
    {
        getchar();
        for(m=1;m<=tc;m++)
        {
            printf("Case %d:\n",m);
            cin>>n;
            sum=0;
            for(i=0;i<n;i++)
            {
                cin>>command;
                if(command=="donate")
                {
                    cin>>a;
                    sum+=a;
                }
                else cout<<sum<<endl;
            }
        }
    }

    return 0;
}
