//url
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,freq[500];
	char str[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
            cin>>str;
            memset(freq,0,sizeof(freq));
            int len = strlen(str);
            for(i=0;i<len;i++)
            {
                int asciiVal = (int)str[i];
                freq[asciiVal]++;
            }
            bool ok = true;
            k=0;
            for(i=97;i<=122;i++)
            {
                if(freq[i]%2!=0)
                {
                    k++;
                    if(k>=2)
                    {
                        ok=false;
                        break;

                    }
                }
            }
            if(ok)
                cout<<"Yes"<<endl;
            else cout<<"No"<<endl;



	    }
	}
	return 0;
}
