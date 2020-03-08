// https://practice.geeksforgeeks.org/problems/rotation/0
#include <bits/stdc++.h>
using namespace std;
int num[10000005]
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
	        cin>>n;
	        for(i=0;i<n;i++)
	            cin>>num[i];
	        prev = num[0];
	        ans = 0;
	        for(i=1;i<n;i++)
	        {
	            if(num[i]<prev)
	            {
	                ans = i;
	                break;
	            }
	            prev = num[i];
	        }
	        cout<<ans<<endl;
	        
	        
	    }
	}
	return 0;
}
