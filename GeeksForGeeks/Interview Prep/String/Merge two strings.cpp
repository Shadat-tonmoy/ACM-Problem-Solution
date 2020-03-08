//url
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	char str1[10005],str2[10005];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
            cin>>str1>>str2;
            int len1 = strlen(str1);
            int len2 = strlen(str2);
            for(i=0;i<max(len1,len2);i++)
            {
                if(i<len1)
                    cout<<str1[i];
                if(i<len2)
                    cout<<str2[i];
            }
            cout<<endl;
	    }
	}
	return 0;
}
