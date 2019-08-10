#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,x,y,z,src,dst,frnt,sz,frntdata,tc=1;
    queue <int> q;
    vector <int> data[1000];
    bool visited[1000],found;
    map<int,int> level;
    while(scanf("%d",&m)!=EOF)
    {
        found=false;
        memset(visited,false,sizeof visited);
        for(j=0; j<m; j++)
        {
            cin>>x;
            data[1].push_back(x);
            data[x].push_back(1);
        }
        for(i=2; i<20; i++)
        {
            cin>>m;
            for(j=0; j<m; j++)
            {
                cin>>x;
                data[i].push_back(x);
                data[x].push_back(i);
            }
        }
        /*cout<<"Output : "<<endl;
        for(i=1;i<20;i++)
        {
            for(j=0;j<data[i].size();j++)
                cout<<data[i][j]<<" ";
            cout<<endl;
        }*/
        cin>>m;
        printf("Test Set #%d\n",tc++);
        for(l=0; l<m; l++)
        {
            memset(visited,false,sizeof visited);
            found=false;
            cin>>src>>dst;
            q.push(src);
            visited[src]=true;
            frnt = q.front();
            level[frnt]=0;
            while(!q.empty())
            {
                frnt = q.front();
                q.pop();
                sz = data[frnt].size();
                for(i=0; i<sz; i++)
                {
                    frntdata = data[frnt][i];
                    if(!visited[frntdata])
                    {
                        visited[frntdata]=true;
                        level[frntdata]=level[frnt]+1;
                        q.push(frntdata);
                    }
                    if(frntdata==dst)
                    {
                        found=true;
                        break;
                    }
                }
                if(found)
                    break;
            }
            printf("%2d to %2d: %d\n",src,dst,level[dst]);
            while(!q.empty())
                q.pop();
            level.clear();

        }
        cout<<endl;
        while(!q.empty())
            q.pop();
        level.clear();
        for(i=0; i<=100; i++)
            data[i].clear();



    }
    return 0;
}
