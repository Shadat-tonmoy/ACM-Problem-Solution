#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,tc,c,a,leftSum,rightSum,num[100005],left[100005],sum;
    bool found;
    while(cin>>tc)
    {
        for(l=1;l<=tc;l++)
        {
            cin>>n;
            sum=0;
            found = false;
            for(i=0;i<n;i++)
            {
                cin>>num[i];
                left[i]=sum;
                sum+=num[i];
            }
            for(i=0;i<n;i++)
            {
                leftSum = left[i];
                rightSum = (left[n-1]+num[n-1]) - (left[i]+num[i]);
                if(leftSum==rightSum)
                {
                    found = true;
                    break;
                }
            }
            if(found)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
    }
    return 0;
}
