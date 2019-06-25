#include<bits/stdc++.h>
using namespace std;
char output[1000][1000];
int main()
 {
    int i,j,k,l,m,n,num[10000],x,y,z,tc;
    char str[10000];
    while(cin>>tc)
    {
        for(x=1;x<=tc;x++)
        {
            cin>>str;
            int len = strlen(str);
            j=0;
            k=0;
            for(i=0;i<len;i++)
            {
                if(str[i]!='.')
                {
                    output[k][j++]=str[i];
                }
                else {
                    output[k][j]='\0';
                    k++;
                    j=0;
                }
            }
            output[k][j]='\0';

            for(i=k;i>=0;i--)
            {
                cout<<output[i];
                if(i==0)
                    cout<<endl;
                else cout<<".";

            }

        }
    }
	return 0;
}
