//url
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	char str[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>str[i];
			bool isPallindrome = true;
			for(i=0,j=n-1;i<n/2;i++,j--)
			{
				if(str[i]==str[j])
					isPallindrome = true;
				else {
					isPallindrome = false;
					break;
				}
			}
			if(isPallindrome)
				cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
	        
	        
	        
	    }
	}
	return 0;
}
