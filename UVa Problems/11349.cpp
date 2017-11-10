#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,mata[100][100],matb[100][100];
    while(cin>>n)
    {
        bool yes = true;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                cin>>mata[i][j];
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                matb[i][j]=mata[j][i];
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
               cout<<mata[i][j]<<" ";
            }
                cout<<endl;
        }
        cout<<endl;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
               cout<<matb[i][j]<<" ";
            }
                cout<<endl;
        }


        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(mata[i][j]!=matb[i][j])
                {
                    yes = false;
                    break;
                }
            }
            if(!yes)
                break;
        }
        if(yes)
            printf("Yes\n");
        else printf("No\n");


    }
    return 0;
}
