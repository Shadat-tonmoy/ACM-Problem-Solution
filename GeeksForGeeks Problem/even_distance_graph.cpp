//https://practice.geeksforgeeks.org/problems/nodes-at-even-distance/0
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,node,edge;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			vector<int> graph[10005];
			bool visited[10005];
			int level[10005]={0},nodeAtLevel[10005]={0},maxLevel=0,even=1,odd=0;
			queue<int> q;
			cin>>node;
			for(i=1;i<=node-1;i++)
			{
				cin>>x>>y;
				graph[x].push_back(y);
				graph[y].push_back(x);
			}
			q.push(1);
			visited[1]=true;
			nodeAtLevel[0]=1;
			while(!q.empty())
			{
				int top = q.front();
				for(i=0;i<graph[top].size();i++)
				{
					if(!visited[graph[top][i]])
					{
						visited[graph[top][i]]=true;
						q.push(graph[top][i]);
						int newLevel = level[top]+1;
						level[graph[top][i]] = newLevel;
						if(newLevel%2==0)
							even++;
						else odd++;

					}
				}
				q.pop();
			}
			ans =  (even*(even-1))/2 + (odd*(odd-1))/2
			cout<<ans<<endl;
	    }
	}
	return 0;
}
