#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,v,q,c;
    int sellers[5000];
    bool flag;
    while (cin>>n>>v)
    {
        c=0;
        l=0;
        for(i=0;i<n;i++)
        {
            flag = false;
            cin>>k;
            for(j=0;j<k;j++)
            {
                cin>>q;
                if(v>q && !flag)
                {
                    c++;
                    flag = true;
                    sellers[l] = i+1;
                    l++;
                }
            }
        }
        cout<<c<<endl;
        for(i=0;i<l;i++)
            cout<<sellers[i]<<" ";
        cout<<endl;

    }

    return 0;

}
