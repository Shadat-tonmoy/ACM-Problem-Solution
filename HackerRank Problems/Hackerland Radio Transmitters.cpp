#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,maxi,pos,num[100005],mini;
    while(cin>>n>>k)
    {
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        sort(num,num+n);
        i=0;
        c=0;
        int range;
        while(i<n)
        {
            c++;
            range = num[i]+k;
            while(i<n && num[i]<=range)
                i++;
            i--;
            range = num[i]+k;
            while(i<n && num[i]<=range)
                i++;
        }
        cout<<c<<endl;
    }

}
