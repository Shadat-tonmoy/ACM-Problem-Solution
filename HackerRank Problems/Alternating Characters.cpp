#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,q,a,c,len,sz;
    char str[100005];
    bool funny;
    while(cin>>n)
    {
        for(l=1;l<=n;l++)
        {
            cin>>str;
            len = strlen(str);
            c=0;
            for(i=0;i<len;i++)
            {
                if(str[i]==str[i+1])
                    c++;
            }
            cout<<c<<endl;
        }

    }

    return 0;
}
