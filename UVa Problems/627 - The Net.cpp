#include<bits/stdc++.h>
using namespace std;
vector <int> data[10000];
void process (string str)
{
    bool fst = false;
    int sum = 0,first=0;
    for(int i=0; i<str.size(); i++)
    {
        sum = 0;
        while(str[i]>='0' && str[i]<='9')
        {
            if(!fst)
            {
                first = first*10;
                first = first+ (str[i]-'0');
            }
            else
            {
                sum = sum*10;
                sum = sum + (str[i]-'0');
            }
            i++;
        }
        if(fst)
        {
            data[first].push_back(sum);
        }
        fst = true;
    }
    sort(data[first].begin(),data[first].end());
}
int main()
{
    int i,j,k,l,m,n,src,dst,frntdata,strt,strtdata;
    string str;
    queue <int> q;
    bool visited[100000],found=false;
    map <int,int> level;
    vector <int> path,lv[10000];
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            cin>>str;
            process(str);
        }
        cin>>m;
        cout<<"-----"<<endl;
        for(l=0; l<m; l++)
        {
            found = false;
            memset(visited,0,sizeof visited);
            cin>>src>>dst;
            q.push(src);
            visited[src]=1;
            int frnt = q.front();
            level[frnt]=0;
            lv[0].push_back(frnt);
            while(!q.empty())
            {
                frnt = q.front();
                q.pop();
                int sz = data[frnt].size();
                for(i=0; i<sz; i++)
                {
                    frntdata = data[frnt][i];
                    if(!visited[frntdata])
                    {
                        //cout<<frntdata<<endl;
                        visited[frntdata]=1;
                        level[frntdata]=level[frnt]+1;
                        q.push(frntdata);
                        lv[level[frntdata]].push_back(frntdata);
                    }
                    if(frntdata==dst)
                    {
                        found = true;
                        strt = level[frntdata];
                        strtdata = frntdata;
                        break;
                    }
                }
                if(found)
                    break;
            }
            if(!found)
            {
                cout<<"connection impossible"<<endl;
            }
            else
            {
                path.push_back(strtdata);
                for(i=strt-1; i>=0; i--)
                {
                    bool f = false;
                    for(j=0; j<lv[i].size(); j++)
                    {
                        int dt = lv[i][j];
                        for(k=0; k<data[dt].size(); k++)
                        {
                            if(data[dt][k]==strtdata)
                            {
                                path.push_back(dt);
                                strtdata=dt;
                                f=true;
                                break;
                            }
                        }
                        if(f)
                            break;
                    }
                }
                for(i=path.size()-1; i>=0; i--)
                {
                    if(i==0)
                        cout<<path[i]<<endl;
                    else cout<<path[i]<<" ";
                }
            }
            path.clear();
            level.clear();
            for(i=0; i<500; i++)
                lv[i].clear();
            while(!q.empty())
                q.pop();
        }
        for(i=0; i<500; i++)
            data[i].clear();
    }
    return 0;
}
/*6
1-2,3,4
2-1,3
3-1,2,5,6
4-1,5
5-3,4,6
6-3,5
6
1 6
1 5
2 4
2 5
3 6
2 1
10
1-2
2-
3-4
4-8
5-1
6-2
7-3,9
8-10
9-5,6,7
10-8
3
9 10
5 9
9 2*/
