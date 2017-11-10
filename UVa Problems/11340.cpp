#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long int i,j,k,l,m,n,a,b,v,d,e,sum,t;
    char c;
    string s;
    vector<char> ch;
    vector<int> value;
    vector<string> str;
    vector<int> cou;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n;
            for(int i=0;i<n;i++)
            {
                cin>>c;
                ch.push_back(c);
                cin>>v;
                value.push_back(v);
            }
            cin>>m;
            for(int i=0;i<m;i++)
            {
                getline(cin,s);
                str.push_back(s);
            }
            for(int i=0;i<n;i++)
            {
                int a=0;
                cou.push_back(a);
            }
            for(j=0;j<str.size();j++)
            {
                for(k=0;k<n;k++)
                {
                    if(str[j].at(j)==ch.at(k))
                    {
                        cou.at(k)++;
                    }
                }
            }
            for(int i=0;i<n;i++)
                cout<<cou.at(i)<<" ";
            cout<<endl;


        }
    }

    return 0;
}
