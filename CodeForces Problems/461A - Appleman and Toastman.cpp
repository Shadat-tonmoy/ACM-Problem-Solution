#include<bits/stdc++.h>
using namespace std;
long long int num[300005];
int main()
{
    long long int i,j,k,l,m,n,a,b,c,d,sum;
    while(cin>>n)
    {
        sum = 0;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
            sum+=num[i];
        }
        sort(num,num+n);
        a = sum;
        for(i=0;i<n-1;i++)
        {
            b = num[i];
            sum += b;
            a = a - b;
            sum += a;
        }
        cout<<sum<<endl;


    }


    return 0;

}


