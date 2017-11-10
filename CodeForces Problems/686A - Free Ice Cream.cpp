#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,a,b,c,x,distress;
    char ch;
    while (cin>>n>>x)
    {
        distress = 0;
        for(i=0;i<n;i++)
        {
            cin>>ch>>a;
            if(ch=='+')
                x+=a;
            else if (ch=='-')
            {
                if(x>=a)
                    x-=a;
                else distress++;
            }
        }
        cout<<x<<" "<<distress<<endl;

    }

    return 0;

}
