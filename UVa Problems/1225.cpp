#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,c[20],num[10050],d_s;
    while(cin>>d_s)
    {
        for(k=1; k<=d_s; k++)
        {
            cin>>n;
            memset(c,0,sizeof c);
            for(i=0; i<=n; i++)
                num[i]=i;
            for(i=0; i<=n; i++)
            {
                if(num[i]<10)
                    c[num[i]]++;
                else
                {
                    while(num[i]!=0)
                    {
                        m=num[i]%10;
                        c[m]++;
                        num[i]=num[i]/10;
                    }
                }
            }
            c[0]=c[0]-1;
            for(i=0; i<9; i++)
                cout<<c[i]<<" ";
            cout<<c[9]<<endl;
        }
    }
    return 0;
}
