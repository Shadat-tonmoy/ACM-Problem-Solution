#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,n,v,sz,frnt,c,d,max_M,max_D,ans,src,num,tc,level[2550];
    vector <int> e[2550];
    queue <int> q;
    bool visited[2550],found;
    map <int,int> lev;
    map <int, int> :: iterator it;
    while(scanf("%d",&v)==1)
    {
        max_M = 0;
        max_D = 0;
        found = false;
        for(i=0; i<v; i++)
        {
            scanf("%d",&n);
            //cin>>n;
            for(j=0; j<n; j++)
            {
                //cin>>k;
                scanf("%d",&k);
                e[i].push_back(k);
            }
        }
        scanf("%d",&tc);
        //cin>>tc;
        for(l=1; l<=tc; l++)
        {
            max_M = 0;
            max_D = 0;
            scanf("%d",&src);
            //cin>>src;
            if(e[src].size()==0)
            {
                printf("0\n");
                //cout<<0<<endl;
                continue;
            }
            visited[src]=true;
            q.push(src);
            d=1;
            frnt = q.front();
            level[frnt]=0;
            int max_lev = 0;
            while(!q.empty())
            {
                frnt = q.front();
                sz = e[frnt].size();
                for(i=0; i<sz; i++)
                {
                    num = e[frnt][i];
                    if(!visited[num])
                    {
                        q.push(num);
                        visited[num]=true;
                        level[num]=level[frnt]+1;
                        lev[level[num]]++;
                        if(lev[level[num]]>max_lev)
                            max_lev = lev[level[num]];
                    }
                }
                q.pop();

            }
            //cout<<max_lev<<endl;
            for(it=lev.begin();it!=lev.end();it++)
            {
                if(it->second==max_lev)
                {
                    max_M = it->second;
                    max_D = it->first;
                    break;
                }
            }
            printf("%d %d\n",max_M,max_D);
            //cout<<max_M<<" "<<max_D<<endl;
            memset(visited,false,sizeof visited);
            lev.clear();
        }


    }
    return 0;
}
