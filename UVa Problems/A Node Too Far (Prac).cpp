#include<bits/stdc++.h>
using namespace std;
vector <int> e[100000];
int lev[1000000];
int main()
{
    int i,m,n,node,h_n,c=0,ca=1,ans;
    queue <int> q;
    vector <int> nodes;
    vector <int>::iterator it;
    while(cin>>node)
    {
        if(node==0)
            break;
        c=0;
        for(i=0; i<node; i++)
        {
            int x,y;
            cin>>x>>y;
            e[x].push_back(y);
            e[y].push_back(x);
            nodes.push_back(x);
            nodes.push_back(y);
        }
        sort(nodes.begin(),nodes.end());
        it = unique(nodes.begin(),nodes.end());
        nodes.resize(distance(nodes.begin(),it));
        int sz = nodes.size();
        int src,ttl;
        while(cin>>src>>n)
        {
            bool found = false;
            bool flag = false;
            for(i=0; i<nodes.size(); i++)
            {
                if(nodes[i]==src)
                {
                    found = true;
                    break;
                }
                else found = false;
            }
             //cout<<"SRC : "<<src<<" Found "<<found<<endl;
            c=0;
            memset(lev,-1,sizeof lev);
            if(src==0 && n==0)
                break;
            q.push(src);
            int top = q.front();
            lev[top]=0;
            while(!q.empty())
            {
                int top = q.front();
                int s = e[top].size();
                for(i=0; i<s; i++)
                {
                    int frnt = e[top].at(i);
                    if(lev[frnt]==-1)
                    {
                        lev[frnt]=lev[top]+1;
                        //cout<<"Front is "<<frnt<<" level is "<<lev[frnt]<<endl;
                        if(lev[frnt]>0 && lev[frnt]<=n)
                            c++;
                        q.push(frnt);
                    }
                }
                q.pop();
            }
            //cout<<flag<<endl;
            ans = sz - c;
            //cout<<"C : "<<c<<endl;
            //cout<<"Size : "<<sz<<endl;
            if (found)
                ans=ans-1;
            else ans=ans;
            //else ans = sz;
            //while(cin>>n)
            //  cout<<n<<" is found at level "<<lev[n]<<endl;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",ca,ans,src,n);
            ca++;
            //cout<<ans<<endl;
        }
        for(i=0; i<101; i++)
            e[i].clear();
        nodes.clear();
    }
    return 0;
}
