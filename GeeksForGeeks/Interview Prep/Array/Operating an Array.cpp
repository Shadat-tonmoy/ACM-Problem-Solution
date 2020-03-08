//url
#include <bits/stdc++.h>
using namespace std;
int insertElem(int[] arr,int k,int n);
int findElem(int[] arr,int n);
int deleteElem(int[] arr,int k);
int totalNum;

int main() {
	int i,j,k,l,m,n,a,b,c,d,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>totalNum;
			for(i=1;i<=totalNum;i++)
				cin>>num[i];
			cin>>a>>b>>c>>d;
			cout<<findElem(num,a)<<" "<<insertElem(num,b,c)<<" "<<deleteElem(num,d)<<endl;
	    }
	}
	return 0;
}

int insertElem(int[] arr,int n,int k)
{
	int i;
	for(i=k+1;i<=totalNum+1;i++)
		arr[i] = arr[i-1];
	arr[k] = n;
	return 1;
}
int findElem(int[] arr,int n)
{
	for(int i=1;i<=totalNum;i++)
	{
		if(arr[i]==n)
			return 1;
	}
	return 0;
}

int deleteElem(int[] arr,int n)
{
	for(int i=1;i<=totalNum;i++)
	{
		if(arr[i]==n)
		{
			for(int j=i;j<totalNum;j++)
				arr[j]=arr[j+1];
			return 1;
		}
	}
	return 0;
}