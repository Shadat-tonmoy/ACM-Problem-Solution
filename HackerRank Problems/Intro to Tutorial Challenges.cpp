#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,num[10000],hole,value;
    while(cin>>m>>n)
    {
        for(i=0; i<n; i++)
            cin>>num[i];

        for(i=0; i<n; i++)
        {
            if(num[i]==m)
            {
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}
