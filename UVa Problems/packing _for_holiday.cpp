#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k,t,l,w,h,value;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            value = 0;
            cin>>l>>w>>h;
            if(l>20 || w>20 || h>20)
            {
                value++;
            }
            if(value==0)
                printf("Case %d: good\n",i);
            else printf("Case %d: bad\n",i);
        }
    }
    return 0;
}
