#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,num[100000],b,c=0,t;
    while(cin>>t)
    {
        for(m=1;m<=t;m++)
        {
            cin>>n;
            c=0;
            for(i=0;i<n;i++)
            {
                cin>>num[i];
                for(j=0;j<i;j++)
                {
                    if(num[j]<=num[i])
                        c++;
                }
            }
            cout<<c<<endl;
        }
    }



    return 0;
}
