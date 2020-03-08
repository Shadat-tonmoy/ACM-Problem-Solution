#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n;
    string str;
    while(getline(cin,str))
    {
        while(1)
        {
            if(str[0]=='#')
                break;
            getline(cin,str);
        }
            cout<<str<<endl;
    }



    return 0;
}
