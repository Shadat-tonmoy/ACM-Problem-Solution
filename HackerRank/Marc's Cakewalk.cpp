#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
int main()
{
    long long int i,j,k,l,m,n,a,b,c,d,e,f,cal[50],sum;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
            cin>>cal[i];
        sort(cal,cal+n,comp);
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=(pow(2,i)*cal[i]);
        }
        cout<<sum<<endl;

    }


}
