#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,c;
    char str[105];
    while(cin>>n)
    {
        cin>>str;
        c=0;
        for(i=0;i<n;)
        {
            if(str[i]=='0' && str[i+1]=='1' && str[i+2]=='0')
            {
                c++;
                i+=3;
            }
            else i++;
        }
        cout<<c<<endl;
    }

    return 0;
}
