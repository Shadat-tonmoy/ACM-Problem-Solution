//url
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,sum,num[10000],endIndexes[1000],counts[10000],conSum[1000],startIndex;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			c=0;j=0,sum=0;
	        bool found = false;
			startIndex = -1;
			for(i=0;i<n;i++)
			{
				if(i==n-1 && num[i]>=0)
				{
					c++;
					sum+=num[n-1];
					conSum[j]=sum;
					counts[j]=c;
					endIndexes[j]=n-1;
					j++;
				}
				else if(num[i]<0)
				{
					if(found)
					{
						conSum[j]=sum;
						counts[j]=c;
						endIndexes[j]=i-1;
						found = false;
						j++;
					}
					c=0;
					sum=0;
					startIndex=-1;
				}
				else 
				{
					c++;
					sum+=num[i];
					found = true;
					if(startIndex==-1)
						startIndex=i;
				}
			}
			int maxSum = 0,maxLen = 0,minStart = 9999;
			int ansStart,ansEnd;
			for(i=0;i<j;i++)
			{
				if(conSum[i]>=maxSum)
				{
					if(conSum[i]>maxSum)
					{
						maxSum = conSum[i];
						ansStart = endIndexes[i]-(counts[i]-1);
						ansEnd = endIndexes[i];
						maxLen = counts[i];
						minStart = min(minStart,ansStart);
					}
					else if(conSum[i]==maxSum)
					{
						if(counts[i]>maxLen)
						{
							ansStart = endIndexes[i]-(counts[i]-1);
							ansEnd = endIndexes[i];
							maxLen = counts[i];
						}
					}
					
				}
				// cout<<"startIndex "<<endIndexes[i]-(counts[i]-1)<<" endIndex "<<endIndexes[i]<<" counts "<<counts[i]<<" Sum "<<conSum[i]<<endl;
			}
			for(i=ansStart;i<=ansEnd;i++)
				cout<<num[i]<<" ";
			cout<<endl;
	    }
	}
	return 0;
}
