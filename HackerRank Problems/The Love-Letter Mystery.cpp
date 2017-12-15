#include<bits/stdc++.h>
using namespace std;
bool isPallindrome(char str[])
{
    int len = strlen(str);
    int i,j,k;
    for(i=0,j=len-1; i<len; i++,j--)
    {
        if(str[i]!=str[j])
            return false;
    }
    return true;
}
int main()
{
    int i,j,k,l,m,n,c,len;
    char str[10000];
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            cin>>str;
            c=0;
            if(!isPallindrome(str))
            {
                len = strlen(str);
                for(j=0,k=len-1;j<len/2;j++,k--)
                    c+=abs(str[j]-str[k]);
            }
            cout<<c<<endl;

        }
    }

    return 0;
}
