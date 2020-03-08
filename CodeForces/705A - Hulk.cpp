#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                if(i==n)
                    cout<<"I hate it ";
                else cout<<"I hate that ";
            }
            else
            {
                if(i==n)
                    cout<<"I love it ";
                else cout<<"I love that ";
            }
        }
        cout<<endl;
    }

     return 0;
}
