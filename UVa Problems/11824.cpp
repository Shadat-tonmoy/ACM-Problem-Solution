#include<bits/stdc++.h>
using namespace std;
long long int power(long long int a,long long int b)
{
    long long int ans = a;
    long long int i;
    for(i=1; i<b; i++)
        ans = ans*a;
    return ans;
}
int main()
{
    long long int i,j,k,l,m,n,tc,a,b,c;
    vector <long long int> num;
    while(scanf("%lld",&tc)==1)
    {
        if(tc==0)
            break;
        for(c=1;c<=tc;c++)
        {
            long long int sum = 0;
            while(1)
            {
                scanf("%lld",&n);//cin>>n;
                if(n==0)
                    break;
                num.push_back(n);
            }
            sort(num.begin(),num.end());
            for(i=num.size()-1,j=1;i>=0;i--,j++)
            {
                //cout<<num[i]<<" "<<j<<endl;
                sum += 2*power(num[i],j);
            }
            if(sum>5000000)
                printf("Too expensive\n");
            else printf("%lld\n",sum);
            num.clear();
           // 5000000

        }


    }

    return 0;
}
