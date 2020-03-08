//url
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	string str;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
            // getchar();
            if(x==1)
                getchar();
            getline(cin,str);
            // gets(str);
            int len = str.size();
            for(i=0;i<len;i++)
            {
                if(i==0 && (str[i] >='a' && str[i]<='z'))
                    str[i]-=32;
                else if(i>0 && i<len && str[i-1]==' ' && (str[i] >='a' && str[i]<='z'))
                    str[i]-=32;
            }
            cout<<str<<endl;




	    }
	}
	return 0;
}
