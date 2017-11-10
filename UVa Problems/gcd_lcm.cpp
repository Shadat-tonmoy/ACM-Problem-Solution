#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
/*int gcd(int a,int b)
{
    int mini,j,k,l,m,n,g;
    if(a<b)
        mini=a;
    else mini=b;
    for(int i=mini; i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            g=i;
            break;
        }
    }
    return g;
}
int lcm(int a,int b)
{
    int c,d,e,l;
    c=gcd(a,b);
    d=a*b;
    l = d/c;
    return l;
}
int main()
{
    int a,b,c,d,e,value=0,g,l,t;
    //cin>>a>>b;
    //c = gcd(a,b);
    //d = lcm(a,b);
    //cout<<c<<" "<<d<<endl;
    while(cin>>t)
    {
        for(int i=1; i<=t; i++)
        {
            cin>>a>>b;
            g = gcd(a,b);
            l = lcm(a,b);
            if(g==1)
            {
                cout<<-1<<endl;
            }
            else
            {
                c = a*b;
                for(int i=1; i<=c; i++)
                {
                    value=0;
                    if(c%i==0)
                    {
                        d = c/i;
                        e = i;
                        if(d == gcd(a,b) && e==lcm(a,b))
                        {
                            value++;
                            break;
                        }
                    }
                }
                if(value==0)
                {
                    cout<<-1<<endl;
                }
                else if(value==1)
                {
                    cout<<d<<" "<<e<<endl;
                }
            }
        }
    }
    return 0;
}*/
int main()
{
    long long int a;
    a = 125463796944;
    printf("%ld",a);
}
