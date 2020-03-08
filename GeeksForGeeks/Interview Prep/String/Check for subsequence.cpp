#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int i,j,k,l,m,n,num[10000],x,y,z,tc;
    char str1[10005],str2[10005];
    while(cin>>tc)
    {
        for(x=1;x<=tc;x++)
        {
            cin>>str1>>str2;
            int len1 = strlen(str1);
            int len2 = strlen(str2);
            k=0;
            z=0;
            for(i=0;i<len1;i++)
            {
                for(j=k;j<len2;j++)
                {
                    if(str2[j]==str1[i])
                    {
                        z++;
                        k=j+1;
                        break;
                    }
                }
            }
            if(z==len1)
                cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
	return 0;
}
