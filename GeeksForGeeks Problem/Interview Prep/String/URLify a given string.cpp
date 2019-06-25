//url
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
    char str[10000],output[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
            // if(x==1)
            getchar();
            gets(str);
            cin>>k;
            int len = strlen(str);
            l=0;
            for(i=0;i<len;i++)
            {
                if(str[i]!=' ')
                {
                    output[l++]=str[i];
                }
                else
                {
                    output[l++]='%';
                    output[l++]='2';
                    output[l++]='0';
                }
            }
            output[l]='\0';
            cout<<output<<endl;



	    }
	}
	return 0;
}
