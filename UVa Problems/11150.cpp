#include<iostream>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,total;
    while(cin>>n)
    {
        total=n;
        if(n==2)
            n=3;
        while(n>=3)
        {
            total = total + (n/3);
            n = (n%3) + (n/3);
            if(n==2)
                n=3;
        }
        cout<<total<<endl;
    }

    return 0;
}
