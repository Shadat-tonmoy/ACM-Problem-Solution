#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,c=0,a,b,t;
    string str[10000],match[10000],number;
    while(cin>>t)
    {
        for(k=1;k<=t;k++)
        {
            b=0;
            cin>>n;
            for(i=0;i<n;i++)
                cin>>str[i];
            cin>>number;
            l=number.length();
            for(i=0;i<n;i++)
            {
                c=0;
                for(j=0;j<l;j++)
                {
                    if(str[i][j]!=number[j])
                        c++;
                    if(c>1)
                        break;
                }
                if(c==1 || c==0)
                match[b++]=str[i];
            }
            printf("Case %d:\n",k);
            for(i=0;i<b;i++)
                cout<<match[i]<<endl;
        }
    }

    return 0;
}
