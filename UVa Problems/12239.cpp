#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,b,num[1000],c,found,a;
    while(cin>>n>>b)
    {
        if(n==0 && b==0)
            break;
        c=0;
        found=0;
        for(i=0; i<b; i++)
            cin>>num[i];
        for(i=0; i<=n; i++)
        {
            a=i;
            found=0;
            for(j=0; j<b; j++)
            {
                for(k=j; k<b; k++)
                {
                    if(fabs(num[j]-num[k])==a)
                    {
                        found=1;
                        break;
                    }
                    else found=0;
                }
                if(found==1)
                    break;
            }
            if(found==1)
                c++;
        }
        if(c==n+1)
            cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}
