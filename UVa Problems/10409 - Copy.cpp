#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,s,e,w,t,b,a,i,j,k,times,c;
    char str[100];
    while(cin>>times && times>0)
    {
        t=1;
        b=6;
        n=2;
        s=5;
        e=4;
        w=3;
        for(i=1;i<=times;i++)
        {
            cin>>str;
            if(strcmp(str,"north")==0)
            {

                a=t;
                c=b;
                t=s;
                b=n;
                s=c;
                n=a;
            }
            else if(strcmp(str,"south")==0)
            {
                a=t;
                c=b;
                t=n;
                b=s;
                n=c;
                s=a;
            }
            else if(strcmp(str,"east")==0)
            {
                a=t;
                c=b;
                t=w;
                b=e;
                w=c;
                e=a;
            }
            else if(strcmp(str,"west")==0)
            {
                a=t;
                c=b;
                t=e;
                b=w;
                e=c;
                w=a;
            }
        }
        cout<<t<<endl;
    }

    return 0;
}
