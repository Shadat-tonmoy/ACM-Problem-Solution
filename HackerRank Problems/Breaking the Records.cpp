#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,minFlag,maxFlag,num[10000],mini,maxi;
    while(cin>>n)
    {
        cin>>num[0];
        maxi = num[0];
        mini = num[0];
        minFlag = 0;
        maxFlag = 0;
        //cout<<mini<<" "<<maxi<<endl;
        for(i=1;i<n;i++)
        {
            cin>>num[i];
            if(num[i]>maxi)
            {
                maxi = num[i];
                maxFlag++;
            }
            if(num[i]<mini)
            {
                mini = num[i];
                minFlag++;
            }
        }
        cout<<maxFlag<<" "<<minFlag<<endl;
    }

    return 0;
}
