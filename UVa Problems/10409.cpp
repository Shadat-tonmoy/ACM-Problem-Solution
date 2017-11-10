#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,s,e,w,t,b,a,i,j,k,times;
    string command;
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
            cin>>command;
            if(command=="north")
            {
                a=s;
                s=b;
                b=n;
                n=t;
                t=a;
            }
            else if(command=="south")
            {
                a=n;
                n=b;
                b=s;
                s=t;
                t=a;
            }
            else if(command=="east")
            {
                a=w;
                w=b;
                b=e;
                e=t;
                t=a;
            }
            else if(command=="west")
            {
                a=e;
                e=b;
                b=w;
                w=t;
                t=a;
            }
        }
        cout<<t<<endl;
    }

    return 0;
}
