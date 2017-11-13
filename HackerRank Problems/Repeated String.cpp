#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,l,p,m,n,a,b,num[100005],maxi,sz,tmp,c,ans;
    string str;
    while(cin>>str)
    {
        cin>>n;
        c=0;
        sz = str.size();
        for(i=0;i<sz;i++)
        {
            if(str[i]=='a')
                c++;
        }
        if(n<sz)
        {
            ans = 0;
            for(i=0;i<n;i++)
            {
                if(str[i]=='a')
                    ans++;
            }
        }
        else
        {
            a = n/sz;
            ans = a*c;
            b = n%sz;
            for(i=0;i<b;i++)
            {
                if(str[i]=='a')
                    ans++;
            }
        }
        cout<<ans<<endl;



    }
    return 0;
}
