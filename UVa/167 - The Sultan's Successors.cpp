#include<bits/stdc++.h>
using namespace std;
int target=0,n,ans,grid[105][105],queenFlag = 8,nonvisitedFalg=-1;
int visited[105][105];
void reset()
{
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            visited[i][j] = nonvisitedFalg;
}
void solve(int row,int sum)
{
    // cout<<"Row is now "<<row<<" sum "<<sum<<endl;
    if(row==8)
    {
        // cout<<"Visited Grid "<<endl;
        int qen = 0;
        for(int j=0;j<8;j++)
        {
            for(int k=0;k<8;k++)
            {
                if(visited[j][k]==queenFlag)
                    qen++;
                // cout<<visited[j][k]<<" ";
            }
            // cout<<endl;
        }
        if(qen==8)
        {
            ans = max(ans,sum);    
            // cout<<"total queen"<<qen<<endl;   
        }
        return;
    }
    for(int i=0;i<8;i++)
    {
        if(visited[row][i] == nonvisitedFalg)
        {
            target++;
            visited[row][i]=queenFlag;
            // cout<<"Not Visited "<<row<<"|"<<i<<endl;
            for(int j=0;j<8;j++)
            {
                if(visited[row][j]==nonvisitedFalg)
                    visited[row][j]=row;
            }
            for(int j=0;j<8;j++)
            {
                if(visited[j][i]==nonvisitedFalg)
                    visited[j][i]=row;
            }
            
            for(int j=row,k=i;j<8 && k<8;j++,k++)
            {
                if(visited[j][k]==nonvisitedFalg)
                {
                    visited[j][k]=row;
                }
            }
            for(int j=row,k=i;j>=0 && k>=0;j--,k--)
            {
                if(visited[j][k]==nonvisitedFalg)
                {
                    visited[j][k]=row;
                }
            }
            
            for(int j=row,k=i;j<8 && k>=0;j++,k--)
            {
                if(visited[j][k]==nonvisitedFalg)
                {
                    visited[j][k]=row;
                }
            }
            for(int j=row,k=i;j>=0 && k<8;j--,k++)
            {
                if(visited[j][k]==nonvisitedFalg)
                {
                    visited[j][k]=row;
                }
            }
            
            // cout<<"Visited Grid "<<endl;
            
            // for(int j=0;j<8;j++)
            // {
            //     for(int k=0;k<8;k++)
            //     {
            //         // cout<<visited[j][k]<<" ";
            //         printf("%5d ",visited[j][k]);
            //     }
            //     cout<<endl;
            // }
            // cout<<endl;
            
            sum+=grid[row][i];
            // cout<<"Row is now "<<row<<" col "<<i<<" sum "<<sum<<endl;
            solve(row+1,sum);
            sum-=grid[row][i];
            
            
            for(int j=0;j<8;j++)
            {
                if(visited[row][j]==row || visited[row][j]==queenFlag)
                    visited[row][j]=nonvisitedFalg;
            }
            for(int j=0;j<8;j++)
            {
                if(visited[j][i]==row || visited[j][i]==queenFlag)
                    visited[j][i]=nonvisitedFalg;
            }
            
            for(int j=row,k=i;j<8 && k<8;j++,k++)
            {
                if(visited[j][k]==row || visited[j][k]==queenFlag)
                    visited[j][k]=nonvisitedFalg;
            }
                
                
            for(int j=row,k=i;j>=0 && k>=0;j--,k--)
            {
                {
                    if(visited[j][k]==row || visited[j][k]==queenFlag)
                        visited[j][k]=nonvisitedFalg;
                }
            }
            
            for(int j=row,k=i;j<8 && k>=0;j++,k--)
            {
                {
                    if(visited[j][k]==row || visited[j][k]==queenFlag)
                        visited[j][k]=nonvisitedFalg;
                }
            }
            for(int j=row,k=i;j>=0 && k<8;j--,k++)
            {
                {
                    if(visited[j][k]==row  || visited[j][k]==queenFlag)
                        visited[j][k]=nonvisitedFalg;
                }
            }
            /*cout<<"After clearing "<<endl;
            for(int j=0;j<8;j++)
            {
                for(int k=0;k<8;k++)
                {
                    cout<<visited[j][k]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;*/
        }
    }
    // if(target>=7)
    //     target=0;
    // cout<<"Out of loop Row is now "<<row<<" sum "<<sum<<endl;
}

int main()
{
	int i,j,k,l,m,tc,z,x,y,w;
	while(cin >> n)
	{
	    for(i=0;i<n;i++)
	    {
	       reset();
	       for(j=0;j<8;j++)
	       {
	           for(k=0;k<8;k++)
	           {
	               cin>>grid[j][k];
	           }
	       }	       
	        ans = 0;
	        /*for(j=0;j<8;j++)
	        {
	            for(k=0;k<8;k++)
	            {
	                cout<<grid[j][k]<<" ";
	            }
	            cout<<endl;
	        }
	        cout<<endl;*/
	        
            solve(0,0);
	       // cout<<"ans : "<<ans<<endl;
	        printf("%5d\n",ans);
	       
	    }
	    
	}

	return 0;
}