#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,c,solve;
    string str;
    while(cin>>n)
    {
        solve = 0;
        getchar();
        for(i=0;i<n;i++)
        {
            c=0;
            getline(cin,str);
            for(j=0;j<str.size();j++)
            {
                if(str[j]=='1')
                    c++;
            }
            if(c>=2)
                solve++;
        }
        cout<<solve<<endl;
    }
    return 0;
}
