#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,ans;
    char num[500];
    while(cin>>n)
    {
        if(n>5)
        {
            if(n%5==0)
                ans = n/5;
            else ans = (n/5)+1;
        }
        else ans = 1;
        cout<<ans<<endl;



    }


    return 0;

}


