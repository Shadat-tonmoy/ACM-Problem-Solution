#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n;
    string str;
    bool one=false,ten=false;
    while(cin>>n)
    {
        int grp=0;
        for(i=1;i<=n;i++)
        {
            cin>>str;
            if(str=="10")
            {
                if(!ten)
                {
                    grp++;
                    ten=true;
                    one=false;
                }
            }
            else
            {
                if(!one)
                {
                    grp++;
                    one=true;
                    ten=false;
                }
            }
        }
        cout<<grp<<endl;
    }
    return 0;
}
