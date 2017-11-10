#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n;
    string str1,str2;
    char str3[200];
    while(cin>>str1)
    {
        cin>>str2;
        for(i=0;i<str2.size();i++)
        {
            if(str1[i]==str2[i])
                str3[i]='0';
            else str3[i]='1';
        }
        str3[i]='\0';
        cout<<str3<<endl;
    }
    return 0;

}


