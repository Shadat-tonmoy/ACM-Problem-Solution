#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,a,b,c,d,num[10],min,max;
    for(i=0;i<5;i++)
        cin>>num[i];
    sort(num,num+5);
    min=0;
    max=0;
    for(i=0;i<4;i++)
        min+=num[i];
    for(i=4;i>0;i--)
        max+=num[i];
    cout<<min<<" "<<max<<endl;

}
