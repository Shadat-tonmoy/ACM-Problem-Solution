#include <bits/stdc++.h>
using namespace std;
#define MAX 150
long long int tempArray[MAX],n,grid[MAX][MAX];
void resetTempArray()
{
    for(int i=0;i<MAX;i++)
        tempArray[i] = 0;
}
long long int findMax1D()
{
    long long int maxSoFar = -999999999999, maxEndingHere = 0;
    for(int i=0;i<n;i++)
    {
        maxEndingHere += tempArray[i];
        if(maxEndingHere > maxSoFar)
        {
            maxSoFar = maxEndingHere;
        }
        if(maxEndingHere < 0)
        {
            maxEndingHere = 0;
        }
    }
    // cout<<"Max So Far "<<maxSoFar<<endl;
    return maxSoFar;
}

int main() {
	long long int i,j,k,l,m,a,b,c,d,e,f,g;
	while(cin>>n)
	{
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            cin>>grid[i][j];
	        }
	    }
	    long long int ans = -999999999999;
	    for(i=0;i<n;i++)
	    {
	        resetTempArray();
	        for(j=i;j<n;j++)
	        {
	            for(k=0;k<n;k++)
	            {
	                tempArray[k] += grid[k][j];
	            }
	            long long int maxHere = findMax1D();
	            ans = max(maxHere,ans);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}