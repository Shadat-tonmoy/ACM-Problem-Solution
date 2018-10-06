#include<bits/stdc++.h>
#define MAX 100005
#define MAXI 0
#define MINI 9999999999
using namespace std;
int main()
{
    int i,j,k,l,m,n,c,mini,maxi,num[MAX],tc,ans;
    while(cin>>tc)
    {
        for(l=1; l<=tc; l++)
        {
            c=0;
            maxi=0;
            cin>>n;
            for(i=0; i<n; i++)
            {
                cin>>num[i];
            }
            for(i=0;i<n;i++)
            {
                if(num[i]%2==0)
                {
                    for(j=i;j<n;j++)
                    {
                        if(num[j]%2==0)
                            c++;
                        else
                        {
                            maxi = max(maxi,c);
                            c=0;
                            i=j-1;
                            break;
                        }
                    }
                }
            }
            if(maxi>0)
                cout<<maxi<<endl;
            else cout<<-1<<endl;
        }


    }


    return 0;
}
