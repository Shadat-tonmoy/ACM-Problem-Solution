#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,t,num[600],c;
    while(cin>>n>>k)
    {
        for(i=0;i<n;i++)
            cin>>num[i];
        c=0;
        for(i=0;i<n-1;i++)
        {
            if((num[i]+num[i+1])<k)
            {
                int dif = k - (num[i]+num[i+1]);
                c+=dif;
                num[i+1]+=dif;
            }
        }
        cout<<c<<endl;
        for(i=0;i<n;i++)
            cout<<num[i]<<" ";
        cout<<endl;


    }
    return 0;

}
