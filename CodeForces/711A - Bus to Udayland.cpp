#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,ans;
    string str[1001];
    bool found;
    while(cin>>n)
    {
        found=false;
        for(i=0; i<n; i++)
            cin>>str[i];
        for(i=0; i<n; i++)
        {
            if(str[i].at(0)=='O' && str[i].at(1)=='O')
            {
                str[i].at(0)='+';
                str[i].at(1)='+';
                found = true;
                break;
            }
            else if(str[i].at(3)=='O' && str[i].at(4)=='O')
            {
                str[i].at(3)='+';
                str[i].at(4)='+';
                found = true;
                break;
            }
        }
        if(found)
        {
            cout<<"YES"<<endl;
            for(i=0; i<n; i++)
                cout<<str[i]<<endl;
        }
        else cout<<"NO"<<endl;

    }

    return 0;
}
