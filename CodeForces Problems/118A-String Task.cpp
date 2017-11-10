#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,a,b,c,len;
    string str;
    while(getline(cin,str))
    {
        for(i=0;i<str.size();)
        {
            if(str[i]=='A' ||str[i]=='a' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U' || str[i]=='y' || str[i]=='Y')
            {
                str.erase(str.begin()+i);
            }
            else i++;
        }
        for(i=0;i<str.size();i+=2)
        {
            str.insert(i,".");
        }
        for(i=0;i<str.size();i++)
        {
            if(str[i]>='A' && str[i]<='Z')
                str[i]+=32;
        }

        cout<<str<<endl;
    }
    return 0;
}
