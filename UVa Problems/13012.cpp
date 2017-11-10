#include<iostream>
using namespace std;
int main ()
{
    int i,j,k,l,t,num[1000],c=0;
    while(cin>>t)
    {
        c=0;
        for(i=0;i<5;i++)
        {
            cin>>num[i];
            if(num[i]==t)
                c++;
        }
        cout<<c<<endl;

    }

    return 0;
}
