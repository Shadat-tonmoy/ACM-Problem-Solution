#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,a,b,c,num[100000],sum=0,rem,t,h;
    while(cin>>n>>h>>k)
    {
        for(i=0;i<n;i++)
            cin>>num[i];
        sum=0;
        t=0;
        for(i=0;i<n;i++)
        {
            sum+=num[i];
            if(sum>h)
            {
                //cout<<"if ; "<<sum<<endl;
                sum-=num[i];
                //cout<<"if chnged ; "<<sum<<endl;
                i--;
                rem=sum-k;
                t++;
                //if(rem>0)
                    sum=rem;
                if(sum<0)
                    sum=0;
                //cout<<"rem sum; "<<sum<<endl;
            }
        }
        //cout<<sum<<endl;
        //cout<<t<<endl;
        if(sum!=0)
        {
            double r = (double)sum/k;
            //cout<<ceil(r)<<endl;
            t+=ceil(r);
        }
        cout<<t<<endl;
    }


    return 0;
}
