#include<bits/stdc++.h>
using namespace std;
bool isMagic(string sub,string str)
{
    int i,j,k,l,m,pos=0;
    size_t f;
    reverse(sub.begin(),sub.end());
    f = str.find(sub,pos);
    if(f!=std::string::npos)
        return true;
    else return false;
}
int main()
{
    int i,j,k,l,m,n,a,b,c,tc,t,f;
    string str,sub;
    while(cin>>tc)
    {
        for(l=1;l<=tc;l++)
        {
            t=0;
            f=0;
            cin>>str;
            for(i=1;i<=str.size();i++)
            {
                for(j=0;j<str.size();j++)
                {
                    sub = str.substr(j,i);
                    if(sub.size()==i)
                    {
                        if(!isMagic(sub,str))
                        {
                            f++;
                            break;
                        }
                    }
                }
                if(f>0)
                    break;
            }
            if(f==0)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }



    return 0;
}
