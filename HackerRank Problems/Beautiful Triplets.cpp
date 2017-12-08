#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,d,e,f,num[10005];
    while(cin>>n>>d)
    {
        c=0;
        for(i=0;i<n;i++)
            cin>>num[i];
        for(i=0;i<n;i++)
        {
            f=1;
            for(j=i+1;j<n;j++)
            {
                if(num[j]-num[i]==d && f==1)
                    f++;
                else if (num[j]-num[i]==2*d && f==2)
                    f++;
                if(f==3)
                {
                    c++;
                    break;
                }
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
