#include <bits/stdc++.h>
using namespace std;
int col,row,c=0;
bool visited[21][21];
char grid[21][21];
void dfs(int i,int j);
void reset()
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            visited[i][j]=false;
        }
    }
}
int main() {
	int i,j,k,l,m,n,a,b,tc,x,y,z,diff,ans,lower,upper,mid,xi,yi,maxDiff;
	while(cin>>tc)
	{
		//freopen("input.txt", "r", stdin);
	    for(x=1;x<=tc;x++)
	    {
			cin>>col>>row;
			reset();
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    cin>>grid[i][j];
                    if(grid[i][j]=='@')
                    {
                        xi = i;
                        yi = j;
                    }
                }
            }

            /*for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                    cout<<grid[i][j]<<" ";
                }
                cout<<endl;
            }*/
            //cout<<xi<<" "<<yi<<endl;

            c=1;
            dfs(xi,yi);
            printf("Case %d: %d\n",x,c);
            //Case 1: 45
	    }
	}
	return 0;
}
void dfs(int i,int j)
{
    //cout<<"DFS with "<<i<<" "<<j<<endl;
    if((i>=0 && i<row) && (j>=0 && j<col) && !visited[i][j])
    {

        if(grid[i][j]=='#')
            return;
        else if(grid[i][j]=='.')
        {
            c++;
            visited[i][j]=true;
        }
        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
    }
}
