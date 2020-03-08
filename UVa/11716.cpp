#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,a,b,t;
    char str[10090],grid[200][200];
    while(cin>>t)
    {
        getchar();
        for(k=1; k<=t; k++)
        {
            gets(str);
            l=strlen(str);
            b=0;
            n=sqrt(l);
            if(n*n==l)
            {
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        grid[i][j]=str[b++];
                    }
                }
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cout<<grid[j][i];
                    }
                }
                cout<<endl;
            }
            else cout<<"INVALID"<<endl;
        }
    }
    return 0;
}
