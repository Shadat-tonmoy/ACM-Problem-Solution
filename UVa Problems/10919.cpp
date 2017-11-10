#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main ()
{
    int a,b,x,y,i,j,k,l,m,n,c,pass,ans;
    string crs_tkn[10000],crs_req[10000];
    while(cin>>a)
    {
        if(a==0)
            break;
        cin>>b;
        for(i=0; i<a; i++)
            cin>>crs_tkn[i];
        pass=1;
        for(i=1; i<=b; i++)
        {
            cin>>x>>y;
            for(j=1; j<=x; j++)
                cin>>crs_req[j];
            c=0;
            for(j=1; j<=x; j++)
            {
                for(k=0; k<a; k++)
                {
                    if(crs_req[j]==crs_tkn[k])
                    {
                        c++;
                        break;
                    }
                }
            }
            if(c<y)
                pass=0;
        }
        if(!pass)
            printf("no\n");
        else
            printf("yes\n");
    }

    return 0;
}
