#include<iostream>
using namespace std;
int isPrime(int n)
{
    int i=2,j,k,l,m,count=0;
    for(i=2; i<=(n/2); i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        return 1;
    else return 0;
}
int main ()
{
    int i,j,k,l,m,n,a,b,c,p,q,count_prime=0;
    double x,y,z,dif;

    while(cin>>a>>b)
    {
        count_prime=0;
        dif = b-a+1;
        for(i=a; i<=b; i++)
        {
            p=((i*i)+i+41);
            q=isPrime(p);
            if(q==1)
            {
                count_prime++;
            }
        }
        cout<<count_prime<<endl;
        y = (double)count_prime/dif;
        z = y*100;
        cout<<y<<endl;

    }

    return 0;
}
