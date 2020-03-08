#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char str[1000];
    int i,j,k=0,l,m,a,b,c,num[200],sum=0,t,n,pos=0;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {

            pos=0;
            cin>>n;
            getchar();
            for(j=1;j<=n;j++)
            {

                gets(str);
                if(strcmp(str,"LEFT")==0)
                {
                    pos--;
                    num[j]=-1;
                }
                else if (strcmp(str,"RIGHT")==0)
                {
                    pos++;
                    num[j]=1;
                }
                else
                {
                    sum=0;
                    for(k=0; k<strlen(str); k++)
                    {
                        if(str[k]>=48 && str[k]<=57)
                        {
                            sum=sum*10;
                            sum=sum+(str[k]-48);
                        }
                    }
                    pos=pos+num[sum];
                    num[j]=num[sum];
                }
            }
            cout<<pos<<endl;
        }
    }


    return 0;
}
