#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,a,l1,b;
    char str[10000];
    while(gets(str))
    {
        a=0;
        l=strlen(str);
        for(i=0; i<l; i++)
        {
            if(str[i]==' ')
            {
                b=i;
                for(j=b-1; j>=a; j--)
                {
                    cout<<str[j];
                }
                cout<<" ";
                a=b+1;
                i=b;
            }
            else if(i==l-1)
            {
                b=i;
                for(j=b;j>=a;j--)
                    cout<<str[j];
                cout<<endl;
            }
        }
    }
    return 0;

}

