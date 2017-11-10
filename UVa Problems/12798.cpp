#include<iostream>
using namespace std;
int main ()
{
    int i,j,m,n,match[100][100],c=0,p=0;
    while(cin>>n>>m)
    {
        c=0;
        p=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>match[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(match[i][j]==0)
                {
                    c=0;
                    break;
                }
                else c=1;
            }
            if(c==1)
                p++;
        }
        cout<<p<<endl;

    }

    return 0;
}
