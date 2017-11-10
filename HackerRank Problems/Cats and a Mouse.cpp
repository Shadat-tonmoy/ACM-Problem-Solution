#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,s,catA,catB,mouseC;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>catA>>catB>>mouseC;
            if(abs(mouseC-catA)>abs(mouseC-catB))
                   cout<<"Cat B"<<endl;
            else if(abs(mouseC-catB)>abs(mouseC-catA))
                cout<<"Cat A"<<endl;
            else cout<<"Mouse C"<<endl;

        }
    }

    return 0;
}
