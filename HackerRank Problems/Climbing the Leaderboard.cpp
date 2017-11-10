#include<bits/stdc++.h>
using namespace std;
long long int rankings[1000000];
int main()
{
    long long int i,j,k,l,m,n,a,b,c,s,maxi,sz,rank,lastRank;
    while(cin>>n)
    {
        rank=1;
        map<long long int,bool> visited;
        for(i=0;i<n;i++)
        {
            cin>>m;
            if(!visited[m])
            {
                visited[m]=true;
                rankings[rank]=m;
                rank++;
            }
        }
        cin>>m;
        lastRank = rank-1;
        for(i=0;i<m;i++)
        {
            cin>>a;
            bool found = false;
            for(j=lastRank;j>=1;j--)
            {
                if(a<=rankings[j])
                {
                    if(a<rankings[j])
                    {
                        lastRank = j+1;
                        found = true;
                        break;
                    }
                    else if(a==rankings[j])
                    {
                        lastRank = j;
                        found = true;
                        break;
                    }
                }
            }
            if(found)
                cout<<lastRank<<endl;
            else cout<<1<<endl;

        }

    }

    return 0;
}
