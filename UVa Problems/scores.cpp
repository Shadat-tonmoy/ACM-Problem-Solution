#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    char a[10000];
    int i,j,k=0,l,m,n,t,c=0,sum=0;
    while(cin>>t)
    {
        for(j=1; j<=t; j++)
        {
            cin>>a;
            c=0;
            sum=0;
            l=strlen(a);
            for(i=0; i<l; i++)
            {
                if(a[i]=='O')
                {
                    c++;
                    sum+=c;
                }
                else
                {
                    c=0;
                }
            }
            cout<<sum<<endl;
        }

    }


    return 0;
}
