#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,p,m,n,a,b,c;
    while(cin>>n)
    {
        map<int,int> mapA,mapB;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            mapA[i]=a;
            mapB[a]=i;
        }
        for(i=1;i<=n;i++)
        {
            a = mapB[i];
            b = mapB[a];
            cout<<b<<endl;
        }



    }


    return 0;
}
