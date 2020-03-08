#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define MAX 10005

int main() 
{
	lli i,j,k,l,m,n,a,b,c,d,q,tc=0,num[MAX],numToFind,ansIndex;
	while(cin>>n>>q)
	{
	    if(n==0 && q==0)
	        break;
	    tc++;
	    for(i=0;i<n;i++)
	        cin>>num[i];
	    sort(num, num+n);
	    ansIndex = -1;
	    lli minIndex = 99999999999;
	    printf("CASE# %lld:\n",tc);
	    for(i=0;i<q;i++)
	    {
	        cin>>numToFind;
	        minIndex = 99999999999;
	        lli left=0, right=n-1, mid;
	        ansIndex = -1;
    	    while(left<=right)
    	    {
    	        mid = (left + right)/2;
    	        if(num[mid] == numToFind)
    	        {
    	            ansIndex = mid;
    	            minIndex = min(minIndex, ansIndex);
    	            right = mid-1;
    	           // break;
    	        }
    	        else if(numToFind > num[mid])
    	        {
    	            left = mid+1;
    	        }
    	        else if(numToFind < num[mid])
    	        {
    	            right = mid-1;
    	        }
    	    }
    	    if(ansIndex==-1)
    	    {
    	        printf("%lld not found\n",numToFind);
    	    }
    	    else
    	    {
    	        printf("%lld found at %lld\n",numToFind,minIndex+1);
    	    }
	    }
	}
	return 0;
}