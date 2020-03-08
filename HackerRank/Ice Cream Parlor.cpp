#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,tc,num[100000],req,id;
    while(cin>>tc)
    {
        for(l=1;l<=tc;l++)
        {
            bool found = false;
            map<int,vector<int> > ids;
            cin>>m>>n;
            for(i=1;i<=n;i++)
            {
                cin>>num[i];
                ids[num[i]].push_back(i);
            }
            for(i=1;i<=n;i++)
            {
                if(m>=num[i])
                {
                    req = m-num[i];
                    for(j=0;j<ids[req].size();j++)
                    {
                        id = ids[req][j];
                        if(id!=i)
                        {
                            a = min(i,id);
                            b = max(i,id);
                            cout<<a<<" "<<b<<endl;
                            found = true;
                            break;
                        }
                    }
                    if(found)
                        break;
                }
            }
        }
    }
}
