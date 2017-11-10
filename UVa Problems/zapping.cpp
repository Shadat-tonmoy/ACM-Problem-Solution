#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,k,l,minimum,c,d;
    while(cin>>a>>b && (a!=-1 && b!=-1))
    {
        if(a<b)
        {
            c = b-a;
            d = ((a-0)+1)+(99-b);
            if(c<d)
                minimum=c;
            else minimum=d;
            cout<<minimum<<endl;
        }
        else if(a==b)
            cout<<a-b<<endl;
        else if(a>b)
        {
            c = a-b;
            d = ((99-a)+1)+b;
            if(c<d)
                minimum=c;
            else minimum=d;
            cout<<minimum<<endl;
        }
    }
    return 0;
}
