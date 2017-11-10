#include<bits/stdc++.h>
using namespace std;
long long int fact(long long int a)
{
    int i;
    long long int ans = 1;
    for(i=a;i>=1;i--)
    {
        ans = ans * i;
    }
    return ans;
}
int main()
{
    long long int i,j,k,l,m,n,v,q,c,a,b;
    while (cin>>a>>b)
    {
        m = min(a,b);
        n = fact(m);
        cout<<n<<endl;



    }

    return 0;

}
