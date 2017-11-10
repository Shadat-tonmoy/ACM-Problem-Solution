#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,mini,maxi,mini_pos,maxi_pos;
    vector <int> ans;
    while(cin>>n)
    {
        mini=99999999;
        maxi=0;
        m=0;
        for(i=1; i<=n; i++)
        {
            cin>>l;
            if(l>maxi)
            {
                maxi=l;
                maxi_pos=i;
            }
            if(l<mini)
            {
                mini=l;
                mini_pos=i;
            }
        }
        if(abs(mini_pos-n)>m)
        {
            m=abs(mini_pos-n);
        }
        if(abs(mini_pos-1)>m)
        {
            m=abs(mini_pos-1);
        }
        if(abs(maxi_pos-1)>m)
        {
            m = abs(maxi_pos-1);
        }
        if(abs(maxi_pos-n)>m)
        {
            m=abs(maxi_pos-n);
        }
        cout<<m<<endl;
    }





    return 0;
}

