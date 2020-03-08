#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,b,c,a[10000];
    bool ok = true;
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
            cin>>a[i];
        for(i=1; i<=n; i++)
        {
            if(i!=1)
            {
                if(i%2==0)
                {
                    if(a[i]<a[i-1])
                        swap(a[i],a[i-1]);
                }
                else
                {
                    if(a[i]>a[i-1])
                        swap(a[i],a[i-1]);
                }

            }

        }
        for(i=1; i<=n; i++)
        {
            if(i!=1)
            {
                if((i%2==0 && a[i]>=a[i-1]) || (i%2==1 && a[i]<=a[i-1]))
                    ok = true;
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        if(ok)
        {
            for(i=1; i<=n; i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        else cout<<"Impossible"<<endl;


    }



    return 0;
}

