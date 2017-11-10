#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,c,tc=1;
    map < string,vector<string> > e;
    //vector <string> e[105];
    vector <string> ans;
    map <string,int> ind;
    map <string,int> :: iterator it;
    string drinks[102],x,y,tmp;
    map <string,int> visited;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
        {
           cin>>drinks[i];
           visited[drinks[i]]=0;
           ind[drinks[i]]=0;
        }

        scanf("%d",&m);
        for(i=0; i<m; i++)
        {
            cin>>x>>y;
            e[x].push_back(y);
            ind[y]++;
        }
        /*for(it=ind.begin();it!=ind.end();it++)
        {
            cout<<it->first<<" : "<<it->second<<endl;
        }*/
        c=0;
        for(i=0; i<n;)
        {
            //cout<<drinks[i]<<" : "<<ind[drinks[i]]<<endl;
            if(ind[drinks[i]]==0 && !visited[drinks[i]])
            {
                visited[drinks[i]]=1;
                ans.push_back(drinks[i]);
                c++;
                for(j=0; j<e[drinks[i]].size(); j++)
                {
                    tmp = e[drinks[i]][j];//drinks[i][j];
                    //if(ind[tmp]>0)
                        ind[tmp]--;//ind[e[drinks[i]][j]]--;
                }
                i=0;
            }
            else i++;
            if(c==n)
                break;
        }
        printf("Case #%d: Dilbert should drink beverages in this order: ",tc++);
        for(i=0; i<ans.size(); i++)
        {
            if(i==ans.size()-1)
                cout<<ans[i]<<"."<<endl;
            else cout<<ans[i]<<" ";
        }
        cout<<endl;
        ans.clear();
        e.clear();
        ind.clear();
        visited.clear();

    }





    return 0;

}//Case #1: Dilbert should drink beverages in this order: beer wine vodka.
