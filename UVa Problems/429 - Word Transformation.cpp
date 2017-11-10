#include<bits/stdc++.h>
using namespace std;
string a,b;
vector<string> dic;
map <string, vector<string> > e;
bool _check (string a,string b)
{
    int i,j,k,c=0;
    if(a.size()==b.size())
    {
        for(i=0; i<a.size(); i++)
        {
            if(a[i]!=b[i])
                c++;
            if(c>1)
                return false;

        }
    }
    else return false;
    if(c<=1)
        return true;
    else return false;
}
int bfs (string src,string dst)
{
    int i,j,k;
    //cout<<src<<" "<<dst<<endl;
    string top,frnt;
    queue <string> q;
    map <string,int> visited;
    map <string,int> level;
    q.push(src);
    visited[src]=1;
    top = q.front();
    //cout<<"top : "<<top<<endl;
    level[top]=0;
    bool found = false;
    while(!q.empty())
    {
        top = q.front();
        q.pop();
        //cout<<"top size : "<<e[top].size()<<endl;
        for(i=0; i<e[top].size(); i++)
        {
            frnt = e[top][i];
            //cout<<"frnt : "<<frnt<<endl;
            if(!visited[frnt])
            {
                visited[frnt]=1;
                level[frnt]=level[top]+1;
                q.push(frnt);
            }
            if(frnt==dst)
            {
                found = true;
                break;
            }
            if(found)
                break;
        }
    }
    while(!q.empty())
        q.pop();

    return level[dst];
}
int main()
{
    int i,j,k,l,m,n,ans,tc,cc;
    string source,desti,bal;
    bool blank = false;
    char sc[1000];
    while(scanf("%d",&tc)==1)
    {
        for(cc=1; cc<=tc; cc++)
        {
            //getchar();
            //getchar();
            while(cin>>a)
            {
                if(a=="*")
                    break;
                dic.push_back(a);
            }
            /*cout<<"dicri "<<endl;
            for(i=0;i<dic.size();i++)
                cout<<dic[i]<<" ";
            cout<<endl;*/
            for(i=0; i<dic.size(); i++)
            {
                for(j=0; j<dic.size(); j++)
                {
                    if(i!=j)
                    {
                        if(_check(dic[i],dic[j]))
                        {
                            e[dic[i]].push_back(dic[j]);
                            e[dic[j]].push_back(dic[i]);
                        }
                    }
                }
            }
            if(blank)
                cout<<endl;
            blank=true;
            getchar();
            while(getline(cin,bal))
            {
                if(bal=="")
                    break;
                for(i=0; i<bal.size(); i++)
                {
                    if(bal[i]==' ')
                    {
                        j=i;
                        break;
                    }
                    sc[i]=bal[i];
                }
                sc[i]='\0';
                source = sc;
                for(i=j+1,k=0; i<bal.size(); i++,k++)
                {
                    sc[k]=bal[i];
                }
                sc[k]='\0';
                desti = sc;
                //cout<<source<<" "<<desti<<endl;
                ans = bfs(source,desti);
                cout<<source<<" "<<desti<<" "<<ans<<endl;
                //getchar();

            }
            dic.clear();
            e.clear();
            //cout<<"dic cleared"<<endl;
            //cout<<"a cleared"<<endl;
        }

    }







    return 0;

}
