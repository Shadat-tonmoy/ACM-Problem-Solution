/*
* convert the n*n matrix into 2n * 2n matrix. Then run kadane's algo in all the n*n 
* submatrix inside the 2n * 2n matrix 
* AC in 0.540
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX 150
#define inf -999999
long long int tempArray[MAX],n,grid[MAX][MAX];
std::vector<string> inputVector;
void resetTempArray()
{
    for(int i=0;i<MAX;i++)
        tempArray[i] = 0;
}
long long int findMax1D()
{
    long long int maxSoFar = -999999999999, maxEndingHere = 0,i,j;
    for(i=0;i<n;i++)
    {
        maxEndingHere += tempArray[i];
        // cout<<"maxEndingHereNow "<<maxEndingHere<<endl;
        if(maxEndingHere > maxSoFar)
        {
            maxSoFar = maxEndingHere;
        }
        if(maxEndingHere < 0)
        {
            maxEndingHere = 0;
        }
    }
    return maxSoFar;
}
 
int main() {
	long long int i,j,k,l,m,a,b,c,d,e,f,g,tc,x,y,z;
	bool isFirstLine = true;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
	        cin>>n;
	        for(i=0;i<n;i++)
	        {
	            for(j=0;j<n;j++)
	            {
	                cin>>grid[i][j];
	            }
	        }
	        for(i=n,j=0;i<(2*n);j++,i++)
	        {
	            for(k=0;k<n;k++)
	            {
	                grid[k][i] = grid[k][j];
	            }    
	        }
	        for(i=n,j=0;i<(2*n);j++,i++)
	        {
	            for(k=0;k<(2*n);k++)
	            {
	                grid[i][k] = grid[j][k];
	            }    
	        }
	        int counter = 0;
	        long long int ans = -999999999999;
	        for(int row=0;row<=n;row++)
	        {
	            for(int col=0;col<=n;col++)
	            {
	               // cout<<"new sub matrix "<<(++counter)<<endl;
	                resetTempArray();
	                for(i=row;i<row+n;i++)
	                {
	                    for(j=col,k=0;j<col+n;j++,k++)
	                    {
	                        tempArray[k] += grid[i][j];
	                    }
	                    long long int maxHere = findMax1D();
	                    // cout<<"Max here "<<maxHere<<endl;
	                    ans = max(maxHere, ans);
	                   // cout<<endl;
	                }
	            }
	        }
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
