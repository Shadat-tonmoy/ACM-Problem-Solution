//url
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid;
	char str1[50000],str2[50000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>str1>>str2;
			int l1 = strlen(str1);
			int l2 = strlen(str2);
			int cou1[500] = {0} ,cou2[500] = {0};
			bool isAnagram = true;
			for(i=0;i<l1;i++)
			{
				cou1[(int)str1[i]]++;
			}
			for(i=0;i<l2;i++)
			{
				cou2[(int)str2[i]]++;
			}
			for(i=97;i<=122;i++)
			{
				if(cou1[i]!=cou2[i])
				{
					isAnagram = false;
					break;
				}
			}
			if(isAnagram)
				cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
	        
	        
	        
	    }
	}
	return 0;
}
