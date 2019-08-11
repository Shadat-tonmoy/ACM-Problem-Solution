#include <bits/stdc++.h>
using namespace std;
#define MAX 150
#define inf -999999
#define lli long long int 
long long int tempArray[MAX],n,grid[MAX][MAX];
void resetTempArray()
{
    for(int i=0;i<MAX;i++)
        tempArray[i] = 0;
}
void initGrid(int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            grid[i][j] = 1;
        }
        
    }
}
void initRestriction(lli startRow, lli startCol, lli endRow, lli endCol)
{
    // printf("Applying %lld %lld %lld %lld\n",startRow, startCol, endRow, endCol);
    for(lli i=startRow;i<=endRow;i++)
    {
        for(lli j=startCol;j<=endCol;j++)
        {
            grid[i][j] = inf;
        }
    }
}
long long int findMax1D(lli n)
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
 
int main() 
{
	lli i,j,k,l,m,a,b,c,d,e,f,g,tc,x,y,z,size,totalBlock;
	bool isFirstLine = true;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
	        cin>>size>>totalBlock;
	        initGrid(size);
	        for(i=0;i<totalBlock;i++)
	        {
	            lli startCol,startRow,endCol,endRow;
	            cin>>startRow>>startCol>>endRow>>endCol;
	           initRestriction(startRow-1,startCol-1,endRow-1,endCol-1);
	        }
	        lli ans = -999999999999;
	        for(i=0;i<size;i++)
	        {
	            resetTempArray();
	            for(j=i;j<size;j++)
	            {
	                for(k=0;k<size;k++)
	                {
	                    tempArray[k] += grid[k][j];
	                }
	                lli maxHere = findMax1D(size);
	                ans = max(ans,maxHere);
	            }
	        }
	        if(ans == inf)
	            ans = 0;
	        cout<<ans<<endl;

	        
	    }
	}
	return 0;
}
