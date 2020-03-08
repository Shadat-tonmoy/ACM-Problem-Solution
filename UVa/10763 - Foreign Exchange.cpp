#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,a,b,c;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        bool possible = true;
        map<int,int> in,out;
        set<int> place;
        set<int>::iterator it;
        for(i=1;i<=n;i++)
        {
            scanf("%lld %lld",&a,&b);
            in[a]++;
            out[b]++;
            place.insert(a);
            place.insert(b);
        }
        for(it=place.begin();it!=place.end();it++)
        {
            c=*it;
            if(in[c]!=out[c])
            {
                possible=false;
                break;
            }
        }
        if(possible)
            printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
