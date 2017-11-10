#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,a,pos=0;
    string str;
    size_t f;
    getline(cin,str);//>>str;
    for(i=0;i<str.size();)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            //cout<<str[i]<<endl<<str[i+1]<<endl<<str[i+2]<<endl;
            //
            str.erase(str.begin()+i);
            str.erase(str.begin()+i);
            str.erase(str.begin()+i);
            if(i!=0 && str[i-1]!=' ' && str[i+1]!=' ')
                str.insert(i," ");
                //i++;
        }
        else i++;
    }
    cout<<str<<endl;
    return 0;
}
