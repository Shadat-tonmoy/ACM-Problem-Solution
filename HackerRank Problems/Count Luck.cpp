#include<bits/stdc++.h>
using namespace std;
void dfs(int,int);
int checkLeft(int,int);
int checkRight(int,int);
int checkTop(int,int);
int checkBottom(int,int);
char grid[105][105];
map<pair<int,int>,bool> visited;
map<pair<int,int>,int> point;
map<pair<int,int>,int> :: iterator it;
pair<int,int> starting,ending;
bool found;
int ans,row,col;
int main()
{
    int i,j,k,l,m,n,a,b,c,tc,iStart,jStart,iEnd,jEnd;
    while(cin>>tc)
    {
        for(l=1; l<=tc; l++)
        {
            cin>>row>>col;
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    cin>>grid[i][j];
                    if(grid[i][j]=='M')
                    {
                        iStart=i;
                        jStart=j;
                    }
                    else if(grid[i][j]=='*')
                    {
                        iEnd=i;
                        jEnd=j;
                    }
                }
            }
            cin>>k;
            ans = 0;
            found = false;
            dfs(iStart,jStart);
            for(it=point.begin();it!=point.end();it++)
            {
                pair<int,int> point = it->first;
                ans+=it->second;
                //printf("Value of [%d %d] = %d\n",point.first,point.second,it->second);
            }
            //cout<<ans<<endl;
            if(ans==k)
                printf("Impressed\n");
            else printf("Oops!\n");
            visited.clear();
            point.clear();
        }
    }
}
void dfs(int i,int j)
{
    if(!found)
    {
        int option = checkLeft(i,j)+checkRight(i,j)+checkTop(i,j)+checkBottom(i,j);

        if(option>1)
        {
            //ans++;
            point[make_pair(i,j)]=1;
        }
        else point[make_pair(i,j)]=0;
        //printf("For %d %d option is %d\n",i,j,option);
        if(checkLeft(i,j))
        {
            visited[make_pair(i,j-1)]=true;
            //printf("Putting on stack %d %d and calling dfs(%d %d)\n",i,j,i,j-1);
            dfs(i,j-1);
            //point[make_pair(i,j-1)]=0;

        }
        if(checkRight(i,j))
        {
            visited[make_pair(i,j+1)]=true;
            //printf("Putting on stack %d %d and calling dfs(%d %d)\n",i,j,i,j+1);
            dfs(i,j+1);
            //point[make_pair(i,j+1)]=0;
        }
        if(checkTop(i,j))
        {
            visited[make_pair(i-1,j)]=true;
            //printf("Putting on stack %d %d and calling dfs(%d %d)\n",i,j,i-1,j);
            dfs(i-1,j);
            //point[make_pair(i-1,j)]=0;
        }
        if(checkBottom(i,j))
        {
            visited[make_pair(i+1,j)]=true;
            //printf("Putting on stack %d %d and calling dfs(%d %d)\n",i,j,i+1,j);
            dfs(i+1,j);
            //point[make_pair(i+1,j)]=0;
        }
        if(!found)
            point[make_pair(i,j)]=0;
            //printf("Assigning 0 to point(%d %d) and returning...\n",i,j);
    }
}
int checkLeft(int i,int j)
{
    if(j-1>=0 && grid[i][j-1]=='.' && !visited[make_pair(i,j-1)])
    {

        return 1;
    }
    else if(j-1>=0 && grid[i][j-1]=='*' && !visited[make_pair(i,j-1)])
    {

        found=true;
        return 1;
    }
    return 0;
}

int checkRight(int i,int j)
{
    if(j+1<col && grid[i][j+1]=='.' && !visited[make_pair(i,j+1)])
    {

        return 1;
    }
    else if(j+1<col && grid[i][j+1]=='*' && !visited[make_pair(i,j+1)])
    {

        found=true;
        return 1;
    }
    return 0;
}


int checkTop(int i,int j)
{
    if(i-1>=0 && grid[i-1][j]=='.' && !visited[make_pair(i-1,j)])
    {

        return 1;
    }
    else if(i-1>=0 && grid[i-1][j]=='*' && !visited[make_pair(i-1,j)])
    {

        found=true;
        return 1;
    }
    return 0;
}


int checkBottom(int i,int j)
{
    if(i+1<row && grid[i+1][j]=='.' && !visited[make_pair(i+1,j)])
    {

        return 1;
    }
    else if(i+1<row && grid[i+1][j]=='*' && !visited[make_pair(i+1,j)])
    {

        found=true;
        return 1;
    }
    return 0;
}
