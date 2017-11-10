#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,l,m,n,sz;
    map <string,vector<string> > data;
    map <string, vector<string> > :: iterator it;
    string a,b,src,frnt,u,v,dst,path[10000];
    queue <string> q;
    map <string,int> level;
    map <string,int> :: iterator itl;
    map <string,int> visited;
    bool found = false,blank=false;
    while(cin>>n)
    {
        found = false;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            data[a].push_back(b);
            data[b].push_back(a);
        }
        /*printf("Edge List : \n");
        for(it=data.begin(); it!=data.end(); it++)
        {
            cout<<it->first<<" : ";
            for(i=0; i<it->second.size(); i++)
            {
                cout<<it->second[i]<<" ";
            }
            cout<<endl;
        }*/
        cin>>src>>dst;
        q.push(src);
        visited[src]=1;
        frnt = q.front();
        level[frnt]=0;
        while(!q.empty())
        {
            frnt = q.front();
            if(frnt==dst)
                found=true;
            q.pop();
            sz=data[frnt].size();
            for(i=0; i<sz; i++)
            {
                u=data[frnt][i];
                //cout<<u<<endl;
                if(!visited[u])
                {
                    visited[u]=1;
                    q.push(u);
                    level[u]=level[frnt]+1;
                }
            }
        }
        path[0]=dst;
        /*for(itl=level.begin();itl!=level.end();itl++)
            cout<<itl->first<<" "<<itl->second<<end;
        cout<<dst<<" : "<<level[dst]<<endl;*/
        int lv = level[dst];
        //cout<<"OUTPUT : "<<endl;
        if(blank)
            cout<<endl;
        blank=true;
        if(!found)
            cout<<"No route"<<endl;
        else
        {
            for(j=1; j<=lv; j++)
            {
                for(i=0; i<data[dst].size(); i++)
                {
                    string tmp = data[dst][i];
                    if(level[tmp]==level[dst]-1)
                    {
                        path[j]=tmp;//cout<<tmp<<endl;
                        dst=tmp;
                        break;
                    }
                }
            }
            for(i=lv; i>0; i--)
            {
                cout<<path[i]<<" "<<path[i-1]<<endl;
            }
            //cout<<endl;

        }
        data.clear();
        level.clear();
        visited.clear();

    }




    return 0;
}
