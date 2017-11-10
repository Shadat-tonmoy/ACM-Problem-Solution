#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x0,y0,x1,y1,x2,y2,x3,y3,i,j,k,l,m,n,a,b,c,d;
    bool found;
    while(cin>>x0>>y0>>x1>>y1)
    {
        found = true;
        if(x0==x1 && y0!=y1)
        {
            if(y1>y0)
            {
                a=y1-y0;
                x2 = x0+a;
                y2 = y0;
                x3 = x0+a;
                y3 = y0+a;
            }
            else
            {
                a = y0-y1;
                x2 = x0+a;
                y2 = y0;
                x3 = x0+a;
                y3 = y0-a;
            }
        }
        else if(y0==y1 && x0!=x1)
        {
            if(x1>x0)
            {
                a=x1-x0;
                x2 = x0;
                y2 = y0+a;
                x3 = x0+a;
                y3 = y0+a;
            }
            else
            {
                a=x0-x1;
                x2 = x0;
                y2 = y0+a;
                x3 = x0-a;
                y3 = y0+a;

            }
        }
        else if(y0!=y1 && x0!=x1)
        {
            if( (y1>y0 && x1>x0) && (y1-y0 == x1-x0))
            {
                a = y1-y0;
                x2 = x0+a;
                y2 = y0;
                x3 = x0;
                y3 = y0+a;
            }
            else if((y0>y1 && x0>x1) && (y0-y1 == x0-x1))
            {
                a = y0-y1;
                x2 = x0-a;
                y2 = y0;
                x3 = x0;
                y3 = y0-a;
            }
            else if((x1>x0 && y1<y0) && (x1-x0 == y0-y1))
            {

                a = x1-x0;
                x2 = x0+a;
                y2 = y0;
                x3 = x0;
                y3 = y0-a;
            }
            else if((y1>y0 && x1<x0) && (y1-y0 == x0-x1))
            {
                a = y1-y0;
                x2 = x0-a;
                y2 = y0;
                x3 = x0;
                y3 = y0+a;
            }
            else found=false;
        }

        if(found)
            printf("%d %d %d %d\n",x2,y2,x3,y3);
        else cout<<-1<<endl;
    }


    return 0;
}
