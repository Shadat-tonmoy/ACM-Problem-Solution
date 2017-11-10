#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,num,temp,a,b;
    while(cin>>a>>b)
    {
        temp=a;
        while(temp>=b)
        {
            a = a + (temp/b);
            temp= (temp-(temp/b)*b)+ temp/b;
        }
        cout<<a<<endl;
    }


    return 0;
}
