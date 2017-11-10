#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,ans,num[105],maxi,index;
    map<long long int,long long int> city;
    while(cin>>n>>m)
    {
        for(i=1; i<=m; i++)
        {
            maxi=-1;
            for(j=1; j<=n; j++)
            {
                cin>>num[j];
                if(num[j]>maxi)
                {
                    maxi=num[j];
                    index=j;
                }
            }
            city[index]++;
        }
        maxi=0;
        for(i=1; i<=m; i++)
        {
            if(city[i]>maxi)
            {
                maxi=city[i];
                index=i;
            }

        }
        cout<<index<<endl;
        city.clear();
    }


    return 0;
}
