#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main ()
{
    unsigned long long  int i,j,k,l,m,n,a,b,c,t,fact;
    unsigned long long int ans=1,num[30060],sum,final_ans;
    char str[10000];
    while(cin>>t)
    {
        for(i=1; i<=t; i++)
        {
            ans=1;
            sum=1;
            fact=1;
            for(a=65; a<=90; a++)
                num[a]=0;
            cin>>str;
            l=strlen(str);
            for(j=0; j<l; j++)
            {
                if(str[j]>=65 && str[j]<=90)
                    num[str[j]]++;
            }
            for(j=65; j<=90; j++)
            {
                if(num[j]!=0)
                {
                    for(c=1;c<=num[j];c++)
                        fact=fact*c;
                    ans=ans*fact;
                    fact=1;
                }
            }

            for(c=1;c<=l;c++)
                sum=sum*c;
            final_ans = sum/ans;
            printf("Data set %llu: %llu\n",i,final_ans);
        }
    }
    return 0;
}
