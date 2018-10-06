#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int i,j,k,l,m,n,a[101],b[101],c,maxi=0;
    cin>>n>>m;
    maxi=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        maxi = max(maxi,a[i]);
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
        maxi = max(maxi,b[i]);
    }
    c=0;
    bool ok = true;
    for(i=1;i<=maxi;i++)
    {
        ok = true;
        for(j=0;j<n;j++)
        {
            if(i%a[j]==0)
                ok = true;
            else
            {
                ok = false;
                break;
            }
        }
        if(ok)
        {
            for(j=0;j<m;j++)
            {
                if(b[j]%i==0)
                    ok = true;
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        if(ok)
            c++;
    }
    cout<<c<<endl;


    return 0;
}
