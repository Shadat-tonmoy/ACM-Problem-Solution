//https://practice.geeksforgeeks.org/problems/rearrange-array-such-that-even-positioned-are-greater-than-odd/0
#include <bits/stdc++.h>
using namespace std;
int findMax(int arr[],int start,int end);
int findMin(int arr[],int start,int end);
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=1;i<=n;i++)
				cin>>num[i];
			for(i=1;i<n;i++)
			{
				if(i%2==0)
				{
					j = findMax(num,i,n);
					swap(num[i],num[j]);
				}
				else if(i%2==1)
				{
					j = findMin(num,i,n);
					swap(num[i],num[j]);
				}
			}
			for(i=1;i<=n;i++)
				cout<<num[i]<<" ";
			cout<<endl;
	    }
	}
	return 0;
}
int findMax(int arr[],int start,int end)
{
	int i,j,k,l,m,n,max=0;
	for(i=start;i<=end;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
			j = i;
		}
	}
	return j;
}

int findMin(int arr[],int start,int end)
{
	int i,j,k,l,m,n,min=999999999;
	for(i=start;i<=end;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
			j = i;
		}
	}
	return j;
}