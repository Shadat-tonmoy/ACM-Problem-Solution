#include<bits/stdc++.h>
using namespace std;
char s[100000000];
int check(string sub,int len)
{
    set <char> unq;
    for(int i=0; i<sub.size(); i++)
        unq.insert(sub[i]);

    if(unq.size()<=len)
        return sub.size();
    else return 0;
}
int main()
{
    int i,j,k,l,m,n,a,b,c,maxi=0;
    string str,sub;
    while(cin>>n)
    {
        if(n==0)
            break;
        getchar();
        maxi=0;
        gets(s);
        str=s;
        for(i=1; i<=str.size(); i++)
        {
            for(j=0; j<str.size(); j++)
            {
                sub = str.substr(j,i);
                if(sub.size()==i)
                {
                    m=check(sub,n);
                    if(m>maxi)
                        maxi=m;

                }
            }
        }
        cout<<maxi<<endl;

    }



    return 0;
}
