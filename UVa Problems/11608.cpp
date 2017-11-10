#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,r,l,m=1,n,crt[1000],req[1000],a[1000];
    while(cin>>n)
    {
        if(n<0)
            break;
        for(i=0;i<12;i++)
            cin>>crt[i];
        for(i=0;i<12;i++)
            cin>>req[i];
        a[0]=n;
        if(a[0]>=req[0])
        {
            r=crt[0]-req[0];
            a[1]=crt[0]+r;
        }
        else a[1]=crt[0]+n;
        for(i=2;i<12;i++)
        {
            if(crt[i-1]>=req[i-1])
            {
                r=crt[i-1]-req[i-1];
                a[i]=crt[i-1]+r;
            }
            else a[i]=crt[i-1]+crt[i-2];
        }
        cout<<endl;
        for(i=0;i<12;i++)
            cout<<a[i]<<" ";
        cout<<endl;

        /*printf("Case %d:\n",m);
        for(i=0;i<12;i++)
        {
            if(a[i]>=req[i])
                cout<<"No problem! :D"<<endl;
            else cout<<"No problem. :("<<endl;
        }*/
        m++;
    }
    return 0;
}
