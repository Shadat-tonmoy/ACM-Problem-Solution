#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,cmax,num[100005];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
            cin>>num[i];
        sort(num,num+n);
        int cmax = num[0]+4;
        int sum = 1;
        for(i=1;i<n;i++)
        {
            if(num[i]>cmax)
            {
                cmax = num[i]+4;
                sum++;
            }
        }
        cout<<sum<<endl;

    }




}
