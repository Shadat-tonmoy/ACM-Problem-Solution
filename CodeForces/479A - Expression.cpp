#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c,maxi=0,ans,ope;
    while(cin>>a>>b>>c)
    {
        maxi=0;
        ope = a+b+c;
        if(ope>maxi)
            maxi=ope;
        ope = a*b*c;
        if(ope>maxi)
            maxi=ope;
        ope = (a+b)*c;
        if(ope>maxi)
            maxi=ope;
        ope = a*(b+c);
        if(ope>maxi)
            maxi=ope;
        ope = (a*b)+c;
        if(ope>maxi)
            maxi=ope;
        ope = a+(b*c);
        if(ope>maxi)
            maxi=ope;
        cout<<maxi<<endl;
    }

    return 0;
}
