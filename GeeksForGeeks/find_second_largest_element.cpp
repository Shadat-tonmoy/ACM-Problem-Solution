//https://practice.geeksforgeeks.org/problems/find-second-largest-element/0
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[100009],diff[100009];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			sort(num,num+n);
			if(n>=2)
			{
				j=n-1;
				while(!num[j-1]<num[j] && j>0)
				{
					if(num[j-1]<num[j])
					    break;
				// 	cout<<"NUMJ "<<num[j]<<" NUMJ-1 "<<num[j-1]<<endl;
					j--;
					
				}
				// cout<<"J "<<j<<endl;
				if(j==0)
					cout<<-1<<endl;
				else cout<<num[j-1]<<endl;
			}
			else cout<<-1<<endl;
	        
	        
	        
	    }
	}
	return 0;
}
