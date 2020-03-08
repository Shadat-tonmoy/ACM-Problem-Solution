#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int main()
{
    int i,j,k,l,r,m,n,a,b,c,num[1000],maxi;
    while(cin>>l>>r)
    {
        maxi = 0;
        for(i=l;i<=r;i++)
        {
            for(j=i;j<=r;j++)
            {
                maxi = max(maxi,i^j);
            }
        }
        cout<<maxi<<endl;
    }



}












