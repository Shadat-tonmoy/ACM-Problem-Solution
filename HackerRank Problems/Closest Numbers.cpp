#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,tc,c,a,r_a,r_b,num[200009],simple,page,p,mini;
    while(cin>>n)
    {
        mini=99999999;
        for(i=0;i<n;i++)
            cin>>num[i];
        sort(num,num+n);

        for(i=0;i<n-1;i++)
        {
            mini = min(mini,abs(num[i]-num[i+1]));
        }

        for(i=0;i<n-1;i++)
        {
            if(abs(num[i]-num[i+1])==mini)
            {
                cout<<num[i]<<" "<<num[i+1]<<" ";
            }
        }
        cout<<endl;


        //cout<<mini<<endl;
    }
    return 0;
}
