#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,police,crime,ans;
    while(cin>>n)
    {
        police=0;
        ans=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a!=-1)
                police+=a;
            else if(a==-1 && police>0)
            {
                police--;
                if(police<0)
                    police=0;
            }

            else if(a==-1 && police==0)
                ans++;
        }
        cout<<ans<<endl;
    }


    return 0;
}
