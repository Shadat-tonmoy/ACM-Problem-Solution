#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int i,j,k,l,m,n,a,b,c,t;
    vector <long long int> num;
    queue <long long int> q;
    while(cin>>t)
    {
        for(m=1; m<=t; m++)
        {
            long long int maxi = -999999999999;
            long long int max_dif = -999999999999;
            cin>>n;
            for(i=0; i<n; i++)
            {
                cin>>a;
                num.push_back(a);
            }
            for(j=0; j<num.size()-1; j++)
            {
                if(num[j]>maxi)
                {
                    maxi=num[j];
                }
                b = maxi - num[j+1];
                if(b > max_dif)
                    max_dif = b;
            }
            cout<<max_dif<<endl;
            num.clear();
        }

    }

    return 0;
}
