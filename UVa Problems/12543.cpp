#include<bits/stdc++.h>
using namespace std;
void PrimeFactor(int n)
{
    int i=2;
    bool found = false;
    printf("%d = ",n);
    if(n<0)
    {
        n=-n;
        printf("%d x ",-1);
    }
    while(n>1)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                printf("%d\n",i);


                n=n/i;
            }
        }printf(" n is %d\n",n);
        //n=n/i;
        i++;
    }
}
int main ()
{
    int a;
    while(scanf("%d",&a)==1)
    {
        PrimeFactor(a);

    }


    return 0;
}
