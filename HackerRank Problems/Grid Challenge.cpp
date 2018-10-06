#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,tc;
    string grid[150],str;
    while(cin>>tc)
    {
        for(l=1; l<=tc; l++)
        {
            cin>>n;
            vector<char> chars;
            bool ok=true;
            for(i=0; i<n; i++)
            {
                cin>>str;
                grid[i]=str;
            }
            for(i=0; i<n; i++)
            {
                sort(grid[i].begin(),grid[i].end());
                if(i>0)
                {
                    for(k=0; k<i; k++)
                    {
                        for(j=0; j<n; j++)
                        {
                            if(grid[i][j]>=grid[k][j])
                                ok = true;
                            else
                            {
                                ok = false;
                                break;
                            }
                        }
                        if(!ok)
                            break;

                    }

                }
            }
            if(ok)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }


}












