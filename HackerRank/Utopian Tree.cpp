#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,s,spring,summer,tc,cycle,init;
    while(cin>>tc)
    {
        for(j=0;j<tc;j++)
        {
            cin>>cycle;
            init=1;
            for(i=1;i<=cycle;i++)
            {
                if(i%2==0)
                {
                    init++;
                }
                else init*=2;
            }
            cout<<init<<endl;

        }
    }


    return 0;
}
