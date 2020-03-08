#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
int main()
{
	int i,j,k,l,m,n,a,b,c,d,x,y,z,p,q;
	int num[MAX];
	while(cin>>n)
	{
		int indexMap[MAX];
		for(i=1;i<=n;i++)
		{
			cin>>num[i];
			indexMap[num[i]] = i;
		}
		cin>>q;
		int fromStart = 0, fromEnd = 0;
		for(x=1;x<=q;x++)
		{
			cin>>a;
			fromStart += (indexMap[a]);
			fromEnd += (n-indexMap[a]+1);
		}
		cout<<fromStart<<" "<<fromEnd<<endl;


	}

}