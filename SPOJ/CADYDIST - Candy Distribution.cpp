#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,tc,sum;
    vector <long long int> type,price;
    while(cin>>n)
    {
        if(n==0)
            break;
            sum=0;
        for(i=0;i<n;i++)
        {
            cin>>m;
            type.push_back(m);
        }
        for(i=0;i<n;i++)
        {
            cin>>m;
            price.push_back(m);
        }
        sort(type.begin(),type.end());
        sort(price.begin(),price.end());
        for(i=0,j=n-1;i<n;i++,j--)
        {
            sum+=type[j]*price[i];
        }
        cout<<sum<<endl;
        type.clear();
        price.clear();

    }






    return 0;
}
