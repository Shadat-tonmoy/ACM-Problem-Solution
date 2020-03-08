#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,mini;
    while(cin>>n)
    {
        mini = 10000000;
        for(i=0;i<n;i++)
        {
            cin>>a;
            mini = min(a,mini);
        }
        if(mini==1)
            cout<<-1<<endl;
        else cout<<1<<endl;
    }




    return 0;

}


