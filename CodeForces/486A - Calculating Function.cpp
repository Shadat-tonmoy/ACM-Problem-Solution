#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int i,j,k,l,m,n,sum=0,odd,even;
    while(cin>>n)
    {
        sum=0;
        if(n%2==0)
        {
            odd = n/2;
            even = n/2;
            sum+= (even*(even+1)) - (odd*odd);
        }
        else
        {
            even = n/2;
            odd = even+1;
            sum+= (even*(even+1)) - (odd*odd);
        }
        cout<<sum<<endl;
    }
    return 0;
}
