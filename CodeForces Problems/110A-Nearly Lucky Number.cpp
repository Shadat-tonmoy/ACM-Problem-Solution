#include<bits/stdc++.h>
using namespace std;
bool isLucky(int n)
{
    int i,j,k,a,b,c;
    bool found = false;
    if(n==0)
        return false;
    while(n!=0)
    {
        a = n%10;
        if(a==7 || a==4)
            found = false;
        else
        {
            found = true;
            break;
        }
        n=n/10;
    }
    if(found)
        return false;
    else return true;
}
main()
{
    int i,j,k,l,m,n,c;
    char str[100];
    while(gets(str))
    {
        l = strlen(str);
        c=0;
        for(i=0;i<l;i++)
        {
            if(str[i]=='4' || str[i]=='7')
                c++;
        }
        //cout<<c<<endl;
        if(isLucky(c))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
