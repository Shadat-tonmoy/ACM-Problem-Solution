#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n,tc,a,b,c,d,k,temp[200];
    char ip_dec[100],ip_bin[100],ip_dec2bin[100];
    while(cin>>tc)
    {
        for(k=1;k<=tc;k++)
        {
            m=0;
            scanf("%d.%d.%d.%d",&a,&b,&c,&d);
            getchar();
            gets(ip_bin);
            //For a
            while(a!=0)
            {
                temp[m++]=a%2;
                a=a/2;
            }
            for(i=0;i<(8-m);i++)
                ip_dec2bin[i]='0';
            for(i=8-m,j=m-1;j>=0;j--,i++)
                ip_dec2bin[i]=temp[j]+'0';
            ip_dec2bin[i]='.';
            //For b
            n=i;
            m=0;
            while(b!=0)
            {
                temp[m++]=b%2;
                b=b/2;
            }
            for(i=n+1,j=0;j<(8-m);j++,i++)
                ip_dec2bin[i]='0';
            n=i;
            for(i=n,j=m-1;j>=0;i++,j--)
                ip_dec2bin[i]=temp[j]+'0';
            ip_dec2bin[i]='.';
            //For c
            n=i;
            m=0;
            while(c!=0)
            {
                temp[m++]=c%2;
                c=c/2;
            }
            for(i=n+1,j=0;j<(8-m);j++,i++)
                ip_dec2bin[i]='0';
            n=i;
            for(i=n,j=m-1;j>=0;i++,j--)
                ip_dec2bin[i]=temp[j]+'0';
            ip_dec2bin[i]='.';
            //For d
            n=i;
            m=0;
            while(d!=0)
            {
                temp[m++]=d%2;
                d=d/2;
            }
            for(i=n+1,j=0;j<(8-m);j++,i++)
                ip_dec2bin[i]='0';
            n=i;
            for(i=n,j=m-1;j>=0;i++,j--)
                ip_dec2bin[i]=temp[j]+'0';
            ip_dec2bin[i]='\0';
            if(strcmp(ip_bin,ip_dec2bin)==0)
                printf("Case %d: Yes\n",k);
            else printf("Case %d: No\n",k);
        }
    }


    return 0;
}
