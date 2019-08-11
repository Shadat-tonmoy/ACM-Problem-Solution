#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,ans,a,b,x,y;
    char num1[1000],num2[1000];
    while(cin>>n)
    {
        ans = 0;
        cin>>num1;
        cin>>num2;
        for(i=0;i<n;i++)
        {
            x = num1[i]-'0';
            y = num2[i]-'0';
            a = abs(x-y);
            if(y>x)
                b = (9-y+1)+x;
            else b = y+(9-x+1);
            //cout<<min(a,b)<<endl;
            ans+=min(a,b);

        }
        cout<<ans<<endl;




    }


    return 0;

}


