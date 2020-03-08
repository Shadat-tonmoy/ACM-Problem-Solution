#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,num[100005];
    while(cin>>n)
    {
        int ans=1;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        sort(num,num+n);
        for(i=0;i<n;i++)
        {
            if(num[i]>=ans)
                ans++;
        }
        cout<<ans<<endl;



    }



    return 0;

}


