#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n;
    string str1,str2,str3;
    bool yes;
    while(cin>>str1)
    {
        yes = false;
        cin>>str2;
        str1+=str2;
        cin>>str3;
        sort(str1.begin(),str1.end());
        sort(str3.begin(),str3.end());
        l = max(str1.size(),str3.size());
        for(i=0;i<l;i++)
        {
            if(str1[i]==str3[i])
                yes=true;
            else
            {
                yes = false;
                break;
            }
        }
        if(yes)
            printf("YES\n");
        else printf("NO\n");

    }

    return 0;

}


