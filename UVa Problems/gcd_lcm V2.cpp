#include<iostream>
using namespace std;
int main()
{
    int a,b,value=0,t,j,i,k;
    while(cin>>t)
    {
        for(int k=1; k<=t; k++)
        {
            cin>>a>>b;
            if(b%a==0)
                cout<<a<<" "<<b<<endl;
            else cout<<-1<<endl;
        }

    }
    return 0;
}
