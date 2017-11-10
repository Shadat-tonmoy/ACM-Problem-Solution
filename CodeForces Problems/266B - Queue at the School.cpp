#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,t;
    char str[1000];
    while(cin>>n>>t)
    {
        cin>>str;
        l = strlen(str);
        for(j=1; j<=t; j++)
        {
            for(i=0; i<l;)
            {
                if(str[i]=='B' && str[i+1]=='G')
                {
                    str[i]='G';
                    str[i+1]='B';
                    i+=2;
                }
                else i++;
                //cout<<str<<endl;

            }
        }
        cout<<str<<endl;

    }




}

