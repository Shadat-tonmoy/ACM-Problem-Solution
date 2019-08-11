#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,prsd,rem,wrng,ans;
    while(cin>>n)
    {
        prsd = 1;
        ans = n;
        for(i=1; i<n; i++)
        {
            rem = n-i;
            wrng = rem-1;
            ans+=wrng*(prsd+1);
            prsd++;
            ans++;
        }
        cout<<ans<<endl;

    }


    return 0;
}
