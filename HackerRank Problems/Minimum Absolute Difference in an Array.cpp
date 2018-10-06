#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
int main()
{
    long int i,j,k,l,m,n,a,b,c,d,e,f,num[100005],diff,minDiff;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
            cin>>num[i];
        sort(num,num+n);
        minDiff = 9999999999;
        for(i=0;i<n-1;i++)
        {
            diff = abs(num[i+1]-num[i]);
            minDiff = min(diff,minDiff);
        }
        cout<<minDiff<<endl;
    }


}
