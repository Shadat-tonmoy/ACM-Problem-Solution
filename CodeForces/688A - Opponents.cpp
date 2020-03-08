#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,maxi;
    bool awin,bwin;
    string str;
    while(cin>>m>>n)
    {
        a=0;
        b=0;
        maxi=0;
        for(i=0;i<n;i++)
        {
            cin>>str;
            awin = false;
            bwin = false;
            for(j=0;j<m;j++)
            {
                if(str[j]=='0')
                {
                    awin=true;
                    break;
                }
            }
            if(!awin)
                bwin = true;
            if(awin)
            {
                a++;
                b=0;
            }
            else if (bwin)
            {
                b++;
                a=0;
            }
            maxi = max(maxi,a);
        }
        cout<<maxi<<endl;




    }




    return 0;

}


