#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int p,h,o,i,j,k,l,m,a,b;
    while(cin>>p>>h>>o)
    {
        a=o-p;
        if(h<=a)
            printf("Props win!\n");
        else printf("Hunters win!\n");
    }

    return 0;
}
