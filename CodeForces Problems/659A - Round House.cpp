#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,mini,ans;
    while(cin>>n>>a>>b)
    {
        if(b>=0)//for clockwise
        {
            m = a + (b%n);
            if(m>n)
                ans = m%n;
            else ans = m;
        }
        else if (b<0)
        {
            b = -b;
            m = a-(b%n);
            if(m==0)
                ans = n;
            else if(m>0)
                ans = m;
            else if(m<0)
                ans = n+m;
        }
        cout<<ans<<endl;

    }




    return 0;

}


