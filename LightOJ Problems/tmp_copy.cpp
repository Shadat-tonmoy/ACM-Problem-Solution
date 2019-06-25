#include<bits/stdc++.h>
using namespace std;
int row,col;
bool insideBoundaryX(int x,int y);
bool insideBoundaryY(int x,int y);
char graph[1000][1000];
int main()
{
    int i,j,k,l,m,n,tc,x,y,z,p,q,r,s,t,hx,hy,disA,disB,disC;
    while(cin>>tc)
    {
        for (x = 1; x <= tc; x++)
        {
            cin>>row>>col;
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    cin>>graph[i][j];
                    if(graph[i][j]=='h')
                    {
                        hx = i;
                        hy = j;
                    }
                }
            }
            disA = 999999;
            disB = 999999;
            disC = 999999;
            queue< pair<int,int> >q;
            int label[100][100] = {0};
            bool visited[100][100] = {false};
            q.push(make_pair(hx,hy));
            while(!q.empty())
            {
            	pair<int, int> frontNode = q.front();
            	int frontX = frontNode.first;
            	int frontY = frontNode.second;
            	// printf("Front %d %d\n",frontX,frontY );
            	if(graph[frontX][frontY]=='a')
            	{
            		disA = min(disA,label[frontX][frontY]);
            	}
            	if(graph[frontX][frontY]=='b')
            	{
            		disB = min(disB,label[frontX][frontY]);
            	}

            	if(graph[frontX][frontY]=='c')
            	{
            		disC = min(disC,label[frontX][frontY]);
            	}

            	if(insideBoundaryX(frontX+1,frontY) && !visited[frontX+1][frontY])
            	{
            		// printf("pushing down\n");
            		q.push(make_pair(frontX+1, frontY));
            		visited[frontX+1][frontY] = true;
            		label[frontX+1][frontY] = label[frontX][frontY]+1;
            	}
            	if(insideBoundaryX(frontX-1,frontY) && !visited[frontX-1][frontY])
            	{
            		// printf("pushing up\n");
            		q.push(make_pair(frontX-1, frontY));
            		visited[frontX-1][frontY] = true;
            		label[frontX-1][frontY] = label[frontX][frontY]+1;
            	}

            	if(insideBoundaryY(frontX,frontY+1) && !visited[frontX][frontY+1])
            	{
            		// printf("pushing right\n");
            		q.push(make_pair(frontX, frontY+1));
            		visited[frontX][frontY+1] = true;
            		label[frontX][frontY+1] = label[frontX][frontY]+1;
            	}
            	if(insideBoundaryY(frontX,frontY-1))
            	{
            		// printf("pushing left\n");
            		q.push(make_pair(frontX, frontY-1));
            		visited[frontX][frontY-1] = true;
            		label[frontX][frontY-1] = label[frontX][frontY]+1;
            	}
            	q.pop();

            }
            int ans = max(disA,max(disB,disC));
            printf("Case %d: %d\n", x,ans);
            // printf("disA %d disB %d disC %d\n", disA,disB,disC);
            // for(i=0; i<row; i++)
            // {
            //     for(j=0; j<col; j++)
            //         printf("%d ",label[i][j]);
            //     cout<<endl;
            // }
        }


    }



    return 0;
}
bool insideBoundaryX(int x,int y)
{
	// printf("Trying to push %d %d\n", x,y);
	if(x>=0 && x<=row && graph[x][y]!='#' && graph[x][y]!='m')
	{
		// printf("True for %d %d\n", x,y);
		return true;
	}
	else{
		// printf("False for %d %d\n", x,y);
		return false;	
	} 
}

bool insideBoundaryY(int x, int y)
{
	// printf("Trying to push %d %d\n",x,y);
	if(y>=0 && y<=col && graph[x][y]!='#' && graph[x][y]!='m')
	{
		// printf("True for %d %d\n", x,y);
		return true;
	}
	else{
		// printf("False for %d %d\n", x,y);
		 return false;
	}
}