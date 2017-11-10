#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,a,b,x,y,z,ans;
    bool exist [150],pangram;
    char str[110];
    while(cin>>n)
    {
        memset(exist,false,sizeof exist);
        pangram = true;
        for(i=0;i<n;i++)
        {
            cin>>str[i];
            if(str[i]>='A' && str[i]<='Z')
                exist[str[i]+32]=true;
            else exist [str[i]]=true;
        }
        for(i=97;i<=122;i++)
        {
            if(!exist[i])
            {
                pangram = false;
                break;
            }
        }
        if(pangram)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;

}


