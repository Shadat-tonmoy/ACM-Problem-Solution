#include<bits/stdc++.h>
using namespace std;
int main()
 {
    long long int i,j,l,m,n,num[10000],x,y,z,tc,a,b,c;
    long long int mul,k;
    while(cin>>tc)
    {
        for(x=1;x<=tc;x++)
        {
            cin>>a>>b>>k;
            mul = pow(a,b);
            for(i=1;i<=k;i++)
            {
                c = mul%10;
                mul = mul/10;
            }
            cout<<c<<endl;
        }
    }
	return 0;
}