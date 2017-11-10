#include<bits/stdc++.h>
#define MAX 10000
using namespace std;
int main()
{
    long long int a,b,i,j,k,l,m,n,c,ans,tmp,dif;
    while(cin>>n>>c)
    {
        ans=0;
        if(n>1)
        {
            cin>>a>>b;
            dif=b-a;
            if(dif<=c)
                ans++;
            else ans=0;
            //cout<<"out loop :"<<a<<" "<<b<<endl;
            for(i=3;i<=n;i++)
            {
                cin>>tmp;
                a=b;
                b=tmp;
                //cout<<"in loop :"<<a<<" "<<b<<endl;
                dif=b-a;
                if(dif<=c)
                    ans++;
                else ans=0;
            }
            cout<<++ans<<endl;
        }
        else if(n==1)
        {
            cin>>a;
            ans=0;
            if(a%c==0)
                ans=1;
            cout<<ans<<endl;
        }

    }



    return 0;
}
