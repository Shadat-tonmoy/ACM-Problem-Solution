#include<bits/stdc++.h>
using namespace std;
#define SIZE 50
int target=0,n,ans;
std::vector<int> graph[SIZE] ;
bool visited[SIZE][SIZE];
void reset()
{
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            visited[i][j] = false;
    for(int i=0;i<SIZE;i++)
        graph[i].clear();
}
void solve(int node,int len)
{
    // cout<<"len is now "<<len<<" for "<<node<<endl;
    // visited[node] = true;
    for(int i=0;i<graph[node].size();i++)
    {
        int front = graph[node][i];
        // cout<<"front is now "<<front<<" flag "<<visited[front]<<endl;
        if(!visited[node][front])
        {
            visited[node][front] = true;
            visited[front][node] = true;
            len++;
            solve(front,len);
            len--;
            visited[node][front] = false;
            visited[front][node] = false;
        }
    }
    ans = max(ans,len);
    // cout<<"ans is now "<<ans<<endl;
    
}

int main()
{
	int i,j,k,l,m,tc,z,x,y,w,a,b;
	while(cin >> n >> m)
	{
	    if(n==0 && m==0)
	        break;
	    reset();
	    for(i=0;i<m;i++)
	    {
	       cin>>a>>b;
	       graph[a].push_back(b);
	       graph[b].push_back(a);
	    }
	    ans = 0;
	    for(i=0;i<n;i++)
	   {
	       // reset();
	       //visited[i]=true;
	        solve(i,0);        
	        
	   }
	   printf("%d\n",ans);
	    
	}

	return 0;
}