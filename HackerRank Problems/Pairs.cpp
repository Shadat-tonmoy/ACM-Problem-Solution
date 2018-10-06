#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,num[100005],c;
    while(cin>>n>>k)
    {
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        sort(num,num+n);
        c=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(num[j]-num[i]==k)
                {
                    c++;
                    break;
                }
                else if(num[j]-num[i]>k)
                    break;

            }
        }
        cout<<c<<endl;
    }

}
