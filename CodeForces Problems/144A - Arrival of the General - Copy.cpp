#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,num[1000],maxi,mini,c,min_pos,max_pos,ans;
    while(cin>>n)
    {
        maxi = 0;
        mini = 999999;
        c = 0;
        for(i=0; i<n; i++)
        {
            cin>>num[i];
            if(num[i]>maxi)
            {
                maxi=num[i];
                max_pos = i;
            }
            if(num[i]<=mini)
            {
                mini=num[i];
                min_pos = i;
            }
        }
        /*if(max_pos==n-1)
        {
            ans = (n-1)-min_pos + (max_pos-1);
        }
        else ans = (max_pos) + (n-1-min_pos);*/
        ans = (max_pos) + (n-1-min_pos);
        if(min_pos<max_pos)
            ans--;
        cout<<ans<<endl;
        //cout<<min_pos<<endl<<max_pos<<endl;


    }
    return 0;
}
