#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,tc,a;
    double angle,in_an;
    scanf("%I64d",&tc);
    for(l=1;l<=tc;l++)
    {
        cin>>a;
        bool yes=true;
        for(i=3;;i++)
        {
            in_an = 180*(i-2);
            angle = in_an/i;
            if(angle==a)
            {
                yes=true;
                break;
            }
            else if(angle>a)
            {
                yes=false;
                break;
            }
        }
        if(yes)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
