/*
* Use DP for memorizing columnwise consecutive sum. Then from each cell try to find the consecutive 
* sum less then capacity for each col. once a sum range found try to maximize its width by traveling
* to right from the column maintaining the same range 
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX 150
#define inf -999999
#define lli long long int 
long long int tempArray[MAX],n,grid[MAX][MAX],dp[MAX][MAX];
std::vector<string> inputVector;
void resetDPArray()
{
    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX;j++)
        {
            dp[i][j] = 0;
        }
    }
}
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
	lli i,j,k,l,m,a,b,c,d,e,f,g,tc,x,y,z,row,col,capacity;
	bool isFirstLine = true;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
	        cin>>row>>col>>capacity;
	        resetDPArray();

	        for(i=0;i<row;i++)
	        {
	            for(j=0;j<col;j++)
	            {
	                cin>>grid[i][j];
	            }
	        }
	        for(i=0;i<col;i++)
	        {
	            lli colSum = 0;
	            for(j=0;j<row;j++)
	            {
	                colSum += grid[j][i];
	                dp[j][i] = colSum;
	            }
	        }
	        lli maxSum = 0, maxArea = 0;
	        for(i=0;i<col;i++)
	        {
	            for(j=0;j<row;j++)
	            {
	                lli colSum = 0;
	                for(k=j;k<row;k++)
	                {
	                    colSum += grid[k][i];
	                    if(colSum <= capacity)
	                    {
	                        lli startRow = j;
	                        lli endRow = k;
	                        lli startCol = i;
	                        lli totalSum = 0;
	                       // printf("colSum %d From %d %d %d\n",colSum,startRow,endRow, startCol);
	                        
	                        for(l=startCol; l<col; l++)
	                        {
	                            lli toAdd = 0;
	                            if(startRow == endRow)
	                            {
	                                toAdd = grid[startRow][l];
	                            }
	                            else
	                            {
	                                if(startRow == 0)
	                                {
	                                    toAdd = dp[endRow][l];
	                                }
	                                else
	                                {
	                                    toAdd = dp[endRow][l] - dp[startRow-1][l];
	                                }
	                            }
	                            totalSum += toAdd;
	                            
	                            if(totalSum > capacity)
	                                break;
	                            lli endCol = l;
	                            lli currentArea = (endRow - startRow + 1) * (endCol - startCol + 1);
	                           // printf("tatoal Sum %d\n",totalSum);
	                           // printf("Area Start (%lld,%lld) end (%lld,%lld) %lld\n",startRow,startCol, endRow, endCol, currentArea);
	                            if(currentArea >= maxArea)
	                            {
	                                if(currentArea == maxArea)
	                                {
	                                    if(totalSum < maxSum)
	                                        maxSum = totalSum;
	                                }
	                                else if(currentArea > maxArea)
	                                {
	                                    maxSum = totalSum;
	                                }
	                                maxArea = currentArea;
	                            }
	                        }
	                    }
	                }
	            }
	        }
	       // cout<<"Max Sum "<<maxSum<<" Area "<<maxArea<<endl;
	        printf("Case #%lld: %lld %lld\n",x,maxArea,maxSum);
	    }
	}
	return 0;
}
