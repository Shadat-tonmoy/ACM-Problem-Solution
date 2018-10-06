#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,a,b,c,tc,num[100000],req,id,fairness;
    while(cin>>n)
    {
        cin>>k;
        fairness=99999999999;
        for(i=0;i<n;i++)
            cin>>num[i];
        sort(num,num+n);
        for(i=0;i<=n-k;i++)
        {
            a = num[i];
            b = num[i+k-1];
            //printf("a %lld b %lld\n",a,b);
            fairness = min(fairness,b-a);
        }
        cout<<fairness<<endl;
    }
}
