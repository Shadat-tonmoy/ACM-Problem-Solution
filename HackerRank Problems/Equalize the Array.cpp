#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,l,p,m,n,a,b,maxi,sz,tmp,c,ans;
    while(cin>>n)
    {
        map<int,int> freq;
        maxi = 0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            freq[a]++;
            maxi = max(maxi,freq[a]);
        }
        cout<<n-maxi<<endl;




    }
    return 0;
}
