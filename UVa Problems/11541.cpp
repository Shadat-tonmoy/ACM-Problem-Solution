#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    char enc[10000],deco[10000];
    int i,j,k,l,m,n,a,b,t,sum;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>enc;
            l=strlen(enc);
            a=0;
            for(j=0;j<l;)
            {
                if((enc[j]>='A' && enc[j]<='Z') && (enc[j+1]>=48 && enc[j+1]<=57))
                {
                    sum=0;
                    for(k=j+1;(enc[k]>=48 && enc[k]<=57);k++)
                    {
                        sum=sum*10;
                        sum=sum+(enc[k]-48);
                    }
                    for(m=1;m<=sum;m++)
                    {
                        deco[a++]=enc[j];

                    }
                }
                j=k;
            }
            cout<<"Case "<<i<<": ";
            for(int i=0;i<a;i++)
                cout<<deco[i];
            cout<<endl;
        }
    }

    return 0;
}
