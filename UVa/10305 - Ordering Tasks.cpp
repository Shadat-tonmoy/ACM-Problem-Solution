#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,x,y;
    vector <int> e[105];
    vector <int> ans;
    map <int,int> ind;
    bool visited[105];
    bool pushed[105];
    while(scanf("%d %d",&n,&m)==2)
    {
        if(m==0 && n==0)
            break;
        memset(visited,false,sizeof visited);
        //memset(pushed,false,sizeof pushed);
        ind.clear();
        ans.clear();
        for(i=1; i<=m; i++)
        {
            scanf("%d %d",&x,&y);
            e[x].push_back(y);
            ind[y]++;
        }
        /*for(i=1; i<=n; i++)
        {
            printf("Indegree of %d is %d\n",i,ind[i]);
        }*/
        int c=0;
        //printf("ans : ");
        for(i=1; i<=n;)
        {
            if(ind[i]==0 && !visited[i])
            {
                //cout<<"if i:"<<i<<endl;
                visited[i]=true;
                ans.push_back(i);
                c++;
                for(j=0; j<e[i].size(); j++)
                {
                    //if(ind[e[i][j]]>0)
                        //cout<<e[i][j]<<" : "<<ind[e[i][j]]<<endl;
                    ind[e[i][j]]--;
                        //cout<<"after dec "<<e[i][j]<<" : "<<ind[e[i][j]]<<endl;
                }
                i=1;
            }
            else i++;
            //cout<<"i:"<<i<<endl;
            if(c==n)
                break;
        }
        for(i=0;i<ans.size();i++)
        {
            if(i==ans.size()-1)
                printf("%d\n",ans[i]);
            else printf("%d ",ans[i]);
        }
        for(i=0; i<106; i++)
            e[i].clear();

    }


    return 0;

}
