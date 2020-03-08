#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;
int main ()
{
    long long int i,j,k,l,m,n,count_d,a,b,c=0,t,dec=0;
    vector <int> bin;
    while(cin>>t)
    {
        for(k=1; k<=t; k++)
        {
            cin>>n;
            while(n!=0)
            {
                bin.push_back(n%2);
                n=n/2;
            }
            bin.push_back(0);
            reverse(bin.begin(),bin.end());
            next_permutation(bin.begin(),bin.end());
            l=bin.size();
            a=l-1;
            for(i=0; i<l; i++)
            {
                dec=dec+(bin[i]*pow(2,a));
                a--;
            }
            printf("Case %lld: %lld\n",k,dec);
            bin.clear();
            dec=0;

        }
    }





}
