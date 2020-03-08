#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,p,m,n,a,b,c,num[1000],index,energry;
    while(cin>>n>>k)
    {
        for(i=0;i<n;i++)
            cin>>num[i];
        index = (0+k)%n;
        energry = 100;
        while(index!=0)
        {
            energry = (num[index]==1) ? energry-3 : energry - 1;
            index = (index+k)%n;
        }
        energry = (num[index]==1) ? energry-3 : energry-1;
        cout<<energry<<endl;
    }
    return 0;
}
