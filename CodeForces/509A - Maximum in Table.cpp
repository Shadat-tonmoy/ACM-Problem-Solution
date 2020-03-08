#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,mat[100][100],maxi=0,a;
    while(cin>>n)
    {
        maxi=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i==0 || j==0)
                {
                    mat[i][j]=1;
                    a=mat[i][j];
                    if(a>maxi)
                        maxi=a;
                }
                else
                {
                    mat[i][j]=mat[i-1][j]+mat[i][j-1];
                    a=mat[i][j];
                    if(a>maxi)
                        maxi=a;
                }
            }
        }
        cout<<maxi<<endl;
    }





    return 0;

}


