#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c;
    string str;
    while(cin>>n)
    {
        bool found = true;
        int zero = 0;
        int one = 0;
        cin>>str;
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='0')
                zero++;
            else one++;
        }
        if(zero<=one)
        {
            a = n-(2*zero);
        }
        else a = n-(2*one);
        cout<<a<<endl;

    }




}

