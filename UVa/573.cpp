#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c;
    vector <int> factors;
    while(cin>>n)
    {
        if(n==0)
            break;
        int d = 2;
        int temp = n;
        if(n<0)
        {
            n=-n;
            factors.push_back(-1);
        }
        while(n!=1)
        {

            if(n%d==0)
            {
                while(n%d==0)
                {
                    factors.push_back(d);
                    n = n/d;
                }
            }
            d++;
        }
        printf("%d = ",temp);
        for(i=0;i<factors.size();i++)
        {
            if(i==factors.size()-1)
                printf("%d\n",factors[i]);
            else printf("%d x ",factors[i]);
        }
        factors.clear();

    }

    return 0;
}
