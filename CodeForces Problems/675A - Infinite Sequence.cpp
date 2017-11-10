#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,f,b,d;
    while(cin>>b>>f>>d)
    {
        if(f<b && d>0)
            cout<<"NO"<<endl;
        else if(d==0 && f==b)
            cout<<"YES"<<endl;
        else if(d==0 && f!=b)
            cout<<"NO"<<endl;
        else
        {
            if(d>0)
            {
                if((f-b)%d==0)
                    cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else
            {
                if(f>b)
                    cout<<"NO"<<endl;
                else
                {
                    if((f-b)%d==0)
                        cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;

                }



            }

        }
    }
    return 0;
}
