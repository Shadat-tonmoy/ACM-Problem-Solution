#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,l1,l2;
    string a,b;
    cin>>a;
    l1 = a.length();
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>b;
        l2 = b.length();
        for(j=0;j<l1;j++)
        {
            cout<<"J is "<<j<<" l2 is "<<l2<<endl;
            if(a.substr(j,l2)==b)
            {
                cout<<"y"<<endl;
                break;
            }

            else cout<<"n"<<endl;
            //cout<<a.substr(j,l2)<<endl;
        }


    }
    return 0;
}
