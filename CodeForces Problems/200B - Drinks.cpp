#include<bits/stdc++.h>
using namespace std;
bool isSquare(long long int n)
{
    long long int m;
    m=sqrt(n);
    if(m*m==n)
        return true;
    else return false;

}
int main()
{
    long long int i,j,k,l,a,b,c,d;
    double sum,n,m,ans;
    while(cin>>n)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>m;
            sum+=m;
        }
        ans = sum/n;
        cout<<ans<<endl;
    }
    return 0;
}
