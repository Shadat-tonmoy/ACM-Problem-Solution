#include<bits/stdc++.h>
using namespace std;
long long int ans[1000009];
int main()
{
    long long int i,j,k,l,p,m,id,n,a,b,c,s,tc,q,num;
    while(cin>>n>>k>>q)
    {
        for(i=0;i<n;i++)
        {
            cin>>num;
            a = i+k;
            //cout<<"a is "<<a<<endl;
            if(a<=n-1)
            {
                ans[a]=num;
                //cout<<"ans[a] : "<<ans[a]<<endl;
            }
            else
            {
                b = a % (n);
                //cout<<"b is "<<b<<endl;
                ans[b] = num;
                //cout<<"ans[b] : "<<ans[b]<<endl
            }
        }
        for(i=0;i<q;i++)
        {
            cin>>id;
            cout<<ans[id]<<endl;
        }



    }


    return 0;
}
