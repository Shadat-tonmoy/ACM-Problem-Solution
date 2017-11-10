#include<bits/stdc++.h>
using namespace std;
long long BigMod (long long a, long long b,long long m)
{
    if(b==0)
        return 1;
    else if (b%2==0)
    {
        long long half = BigMod(a,b/2,m);
        return (half*half)%m;
    }
    else
    {
        long long part1 = a%m;
        long long part2 = BigMod(a,b-1,m);
        return ((part1*part2)%m);
    }
}
int main()
{
    long long int i,j,k,l,m,n,p,len;
    string bin,str;
    while(cin>>str)
    {
        l = str.size();
        if(str[l-1]=='#')
        {
            bin+=str;
            len = bin.size();
            int ans = 0;
            p =0;
            for(i=l-2; i>=0; i--)
            {
                n = bin[i]-'0';
                ans = ((ans%131071) + (n * BigMod(2,p,131071)))%131071;
                p++;

            }
            if(ans==0)
                printf("YES\n");
            else printf("NO\n");
            //cout<<bin<<endl;
        }

        else
        {
            bin = bin + str;
        }
    }
    return 0;
}
