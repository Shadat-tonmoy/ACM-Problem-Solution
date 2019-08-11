#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,sum,refund,bill;

    while(cin>>n)
    {
        map<int,int> freq;
        map<int,int> :: iterator it;
        for(i=0;i<n;i++)
        {
            cin>>a;
            freq[a]++;
        }
        sum=0;
        for(it=freq.begin();it!=freq.end();it++)
        {
            if(it->second%2==0)
                sum+=(it->second/2);
            else
            {
                sum+=((it->second-1)/2);
            }
        }
        cout<<sum<<endl;

    }

    return 0;
}
