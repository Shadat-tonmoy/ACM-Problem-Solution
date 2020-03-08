#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
int main()
{
    long int i,j,k,l,m,n,a,b,c,tc,sum,flag;
    while(cin>>n>>k)
    {
        vector<long int> important;
        sum=0;
        for(i=0;i<n;i++)
        {

            cin>>a>>flag;
            if(flag==1)
                important.push_back(a);
            else sum+=a;
        }
        sort(important.begin(),important.end(),comp);
        //cout<<sum<<endl;
        int sz = important.size();
        //cout<<sz<<endl;
        for(i=0;i<sz;i++)
        {
            if(i<=k-1)
                sum+=important[i];
            else break;
        }
        for(i=k;i<sz;i++)
            sum-=important[i];
        cout<<sum<<endl;

    }




}
