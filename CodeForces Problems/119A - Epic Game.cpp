#include<bits/stdc++.h>
using namespace std;
int gcd (int a,int b)
{
    if(b==0)
        return a;
    else return gcd(b,a%b);
}
main()
{
    int i,j,k,l,m,n,si,antisi;
    bool simon,antisimon;
    while(cin>>si>>antisi>>n)
    {
        simon = false;
        antisimon = false;
        for(i=0; ;i++)
        {
            if(i%2==0)
            {
                m = gcd(si,n);
                if(m<=n)
                    simon = true;
                else
                {
                    simon = false;
                    break;
                }
                n = n - m;
            }
            else
            {
                m = gcd(antisi,n);
                if(m<=n)
                    antisimon = true;
                else
                {
                    antisimon = false;
                    break;
                }
                n = n - m;
            }
        }
        if(simon)
            cout<<0<<endl;
        else cout<<1<<endl;

    }




    return 0;


}
