#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,num[1000],len;
    char str[10000],out[10000];
    while(gets(str))
    {
        len=strlen(str);
        j=0;
        for(i=0;i<len;i++)
        {
            if(str[i]=='1' || str[i]=='2' || str[i]=='3')
                out[j++]=str[i];
        }
        sort(out,out+j);
        for(i=0;i<j;i++)
        {
            if(i==j-1)
                cout<<out[i]<<endl;
            else cout<<out[i]<<"+";
        }
        //cout<<out<<endl;

    }

    return 0;
}
