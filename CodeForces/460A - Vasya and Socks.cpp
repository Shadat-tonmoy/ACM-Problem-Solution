#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,ans,temp,div,rem;
    while(cin>>n>>m)
    {
        ans = n;
        temp = n;
        while(temp!=0)
        {
            div = temp/m;
            rem =temp%m;
            ans+=div;
            temp = div+rem;
            if(div==0)
                break;

        }
        cout<<ans<<endl;


    }

    return 0;
}
