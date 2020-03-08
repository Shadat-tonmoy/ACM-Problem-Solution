#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int i,j,k,l,m,n,num[10000],x,y,z,tc;
    char str1[10005],str2[10005];
    bool found;
    while(cin>>tc)
    {
        for(x=1;x<=tc;x++)
        {
            cin>>str1;
            cin>>str2;
            int len1 = strlen(str1);
            int len2 = strlen(str2);
            if(len1!=len2)
            {
                found = false;
            }
            else
            {
                for(i=0,j=len1;j<(len1*2);j++,i++)
                {
                    str1[j]=str1[i];
                }
                len1 = strlen(str1);
                found = false;
                for(i=0;i<len1;i++)
                {
                    if(str1[i]==str2[0])
                    {
                        found = true;
                        for(k=i,j=0;j<len2;k++,j++)
                        {
                            if(str1[k]!=str2[j])
                            {
                                found = false;
                                break;
                            }
                        }
                        if(found)
                            break;

                    }
                }

            }

            if(found)
                cout<<1<<endl;
            else cout<<0<<endl;
            }
    }
	return 0;
}
