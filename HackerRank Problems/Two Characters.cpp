#include<bits/stdc++.h>
using namespace std;
string filteredString(string,char,char);
bool istType(string);
int main()
{
    int i,j,k,l,m,n,c,len,maxi;
    string str,out;
    char uni[1005],a,b;
    while(cin>>n)
    {
        cin>>str;
        len = str.size();
        maxi = 0;
        map<char,bool> flagMap;
        j=0;
        for(i=0;i<len;i++)
        {
            if(!flagMap[str[i]])
            {
                flagMap[str[i]] = true;
                uni[j]=str[i];
                j++;
            }
        }
        for(i=0;i<j;i++)
        {
            for(k=i+1;k<j;k++)
            {
                a = uni[i];
                b = uni[k];
                out = filteredString(str,a,b);
                len = out.size();
                if(istType(out))
                    maxi = max(maxi,len);
            }
        }
        cout<<maxi<<endl;


    }

    return 0;
}
string filteredString(string str,char a, char b)
{
    string newString="";
    int len = str.size();
    int i,j,k,l,m,n;
    for(i=0;i<len;i++)
    {
        if(str[i]==a || str[i]==b)
            newString+=str[i];
    }
    return newString;
}
bool istType(string str)
{
    int len = str.size(),i;
    for(i=0;i<len-1;i++)
    {
        if(str[i]==str[i+1])
            return false;
    }
    return true;

}
