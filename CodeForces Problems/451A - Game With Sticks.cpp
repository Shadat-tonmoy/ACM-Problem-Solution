#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,a,t;
    while(cin>>n>>m)
    {
        a = m*n;
        t=0;
        while(a>0)
        {
            a = a- ((m-1)+(n-1)+1);
            m--;
            n--;
            t++;
        }
        if(t%2==0)
            cout<<"Malvika"<<endl;
        else cout<<"Akshat"<<endl;
        //cout<<t<<endl;


    }

    return 0;
}
