#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,a,b,c,d,num[100000];
    while(cin>>k>>l>>m>>n>>d)
    {
        c=0;
        for(i=0;i<d;i++)
            num[i]=i+1;
        for(i=0;i<d;i++)
        {
            if(num[i]%k==0 || num[i]%l==0 || num[i]%m==0 || num[i]%n==0)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }



    return 0;
}
