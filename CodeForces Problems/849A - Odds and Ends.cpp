#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,mini,ans;
    bool possible;
    while(cin>>n)
    {
        possible = false;
        if(n%2==0)
            possible = false;
        else possible = true;
        if(possible)
        {
            for(i=0;i<n;i++)
            {
                cin>>m;
                if(i==0 && m%2==1 && possible)
                    possible = true;
                else if (i==0 && m%2==0)
                    possible = false;
                if(i==n-1 && m%2==1 && possible)
                    possible = true;
                else if (i==n-1 && m%2==0 && possible)
                    possible = false;
            }

        }
        else
        {
            for(i=0;i<n;i++)
            {
                cin>>m;
            }

        }
        if(possible)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }




    return 0;

}


