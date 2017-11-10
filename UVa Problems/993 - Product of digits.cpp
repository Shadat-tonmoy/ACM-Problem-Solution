#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,k,l,m,n,a,tc,factors[10000];
    while(cin>>tc)
    {
        for(m=1;m<=tc;m++)
        {
            cin>>n;
            if(n<10)
                cout<<n<<endl;
            else
            {
                i=0;
                a=9;
                while(a>1)
                {
                    if(n%a==0)
                    {
                        while(n%a==0)
                        {
                            factors[i++]=a;
                            n = n/a;
                        }
                    }
                    a--;
                }
                sort(factors,factors+i);
                if(n==1)
                {
                    for(j=0;j<i;j++)
                        cout<<factors[j];
                    cout<<endl;
                }
                else cout<<-1<<endl;

            }
        }
    }
    return 0;
}


