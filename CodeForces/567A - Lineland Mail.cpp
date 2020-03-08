#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,num[100000],a,b,c,d,mini,maxi;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
            cin>>num[i];
        for(i=0;i<n;i++)
        {
            maxi = max(abs(num[i]-num[0]),abs(num[i]-num[n-1]));
            if(i==0 || i==n-1)
            {
                if(i==0)
                    mini = abs(num[i]-num[i+1]);
                else mini = abs(num[i]-num[i-1]);

            }
            else
            {
                mini = min(abs(num[i]-num[i-1]),abs(num[i]-num[i+1]));
            }
            cout<<mini<<" "<<maxi<<endl;
        }


    }





    return 0;
}
