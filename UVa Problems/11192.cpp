#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    int i,j,k,l,n,s,grp,b=0,a;
    char str[10000],rev[10000];
    while(cin>>grp)
    {
        if(grp==0)
            break;
        else
        {
            cin>>str;
            b=0;
            l=strlen(str);
            n=l/grp;
            for(i=0; i<l; i=i+n)
            {
                a=i+(n-1);
                for(j=i+(n-1); j>=a-(n-1); j--)
                {
                    rev[b++]=str[j];
                }
            }
            for(i=0; i<b; i++)
                cout<<rev[i];
            cout<<endl;
        }
    }
    return 0;
}
