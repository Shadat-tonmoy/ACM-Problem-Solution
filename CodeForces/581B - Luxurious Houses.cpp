#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,sum,target,num[100000],ans[100000],maxi;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        maxi=0;
        for(i=n-1;i>=0;i--)
        {
            if(num[i]>maxi)
            {
                maxi = num[i];
                ans[i]=0;
            }
            else
            {
                m =(maxi+1)-num[i];
                ans[i]=m;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
