#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c;
    while(cin>>n)
    {
        for(i=0;i<=n;i++)
        {
            m = 2*i + 1;
            for(a=1;a<=(2*n+1)-m;a++)
                cout<<" ";

            for(j=1,k=0,l=0;j<=m;j++,k++)
            {
                cout<<l;
                if(j!=m)
                    cout<<" ";
                if(k<i)
                    l++;
                else l--;
            }
            cout<<endl;
        }

        for(i=n-1;i>=0;i--)
        {
            m = 2*i + 1;
            for(a=1;a<=(2*n+1)-m;a++)
                cout<<" ";

            for(j=1,k=0,l=0;j<=m;j++,k++)
            {
                cout<<l;
                if(j!=m)
                    cout<<" ";
                if(k<i)
                    l++;
                else l--;
            }
            cout<<endl;
        }
    }
    return 0;
}
