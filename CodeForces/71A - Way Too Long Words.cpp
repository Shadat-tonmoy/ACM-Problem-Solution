#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,len,c=0;
    string str;
    while(cin>>n)
    {
        getchar();
        for(i=1;i<=n;i++)
        {
            c=0;
            getline(cin,str);
            len = str.size();
            if(len>10)
            {
                cout<<str[0]<<len-2<<str[len-1]<<endl;
            }
            else cout<<str<<endl;

        }
    }
    return 0;
}
