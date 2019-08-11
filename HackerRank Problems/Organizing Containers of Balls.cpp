#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,l,p,m,n,a,tc,ans,price,capability[200],noB[200];
    bool possible = false;
    while(cin>>tc)
    {
        for(l=1; l<=tc; l++)
        {
            cin>>n;
            map<long long int,bool> flag;
            memset(noB,0,sizeof(noB));
            for(i=1; i<=n; i++)
            {
                capability[i]=0;
                for(j=1; j<=n; j++)
                {
                    cin>>a;
                    capability[i]+=a;
                    noB[j]+=a;
                }
            }
            for(i=1; i<=n; i++)
            {
                a = noB[i];
                possible = false;
                for(j=1; j<=n; j++)
                {
                    if(capability[j]==a && !flag[j])
                    {
                        flag[j] = true;
                        possible = true;
                        break;
                    }
                }
                if(!possible)
                    break;
            }
            if(possible)
                cout<<"Possible"<<endl;
            else cout<<"Impossible"<<endl;
        }


    }
    return 0;
}
