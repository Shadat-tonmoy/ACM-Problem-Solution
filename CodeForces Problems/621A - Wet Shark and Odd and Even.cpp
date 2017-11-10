#include<bits/stdc++.h>
#define MAX 10000
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,c,ans;
    while(cin>>n)
    {
        vector<long long int> num;
        ans = 0;
        for(i=1; i<=n; i++)
        {
            cin>>m;
            num.push_back(m);
            ans+=m;
        }
        sort(num.begin(),num.end());
        if(ans%2==1)
        {
            for(i=0;i<num.size();i++)
            {
                if(num[i]%2==1)
                {
                    ans-=num[i];
                    break;
                }
            }
        }

        cout<<ans<<endl;
    }



    return 0;
}
