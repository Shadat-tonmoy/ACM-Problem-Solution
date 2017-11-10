#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int gcd(int x,int y)
{
    int m,i,j,k,g;
    if(x<y)
        m=x;
    else m=y;
    for(i=m; i>0; i--)
    {
        if(x%i==0 && y%i==0)
        {
            g=i;
            break;
        }
    }
    return g;
}
int main ()
{
    int a,b,c,i,t,m,n,j,k,l,sum=0,num[1000],gc,maxi=0;
    char str[10000];
    while(cin>>t)
    {
        if(t==0)
            break;
        getchar();
        for(c=1; c<=t; c++)
        {
            a=0;
            k=0;
            b=0;
            maxi=0;
            gets(str);
            l=strlen(str);
            for(i=0; i<l; i++)
            {
                if(str[i]>='0' && str[i]<='9')
                {
                    a=i;
                    for(j=a; ; j++)
                    {
                        if(str[j]==' ')
                        {
                            b=j;
                            i=b-1;
                            break;
                        }
                        else if(j==l)
                        {
                            b=j;
                            i=b-1;
                            break;
                        }

                    }
                    sum=0;
                    for(j=a; j<b; j++)
                    {
                        sum=sum*10;
                        sum = sum+(str[j]-'0');
                    }
                    num[k++]=sum;
                }
            }
            for(i=0; i<k; i++)
            {
                for(j=i+1; j<k; j++)
                {
                    if(num[i]==0 && num[j]==0)
                        gc=0;
                    else if(num[i]==0 && num[j]>0)
                        gc=num[j];
                    else if(num[i]>0 && num[j]==0)
                        gc=num[i];
                    else gc=gcd(num[i],num[j]);
                    if(gc>maxi)
                        maxi=gc;
                }
            }
            cout<<maxi<<endl;
        }
    }
    return 0;
}
