#include<bits/stdc++.h>
using namespace std;
long long int data[12];
int digit(long long int n)
{
    int d = 0;
    while(n!=0)
    {
        d++;
        n=n/10;
    }
    return d;
}
long long int power(int a,int b)
{
    long long int ans=1;
    for(int i=1;i<=b;i++)
        ans=ans*a;
    return ans;
}
void init()
{
    int i;
    for(i=0;i<10;i++)
    {
        data[i+1]=9*power(10,i)*(i+1);
        //cout<<i+1<<" "<<data[i+1]<<endl;
    }


}
int main()
{
    long long int i,j,k,l,m,n,pid,rid,tc,tp,sum,lower,ans;
    init();
    while(cin>>n)
    {
        int dig = digit(n);
        ans = 0;
        for(i=1;i<=dig-1;i++){
            ans+=data[i];
        }

        //ans = data[dig-1];
        lower = power(10,dig-1);
        ans+=(n-lower+1)*dig;
        cout<<ans<<endl;



    }








    return 0;
}
