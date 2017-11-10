#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,pos=0,temp,maxi=0,c=0;
    string str,sub_str,str_max;
    size_t found;
    while(cin>>n>>str)
    {
        maxi=0;
        c=0;
        pos=0;
        int len = str.size();
        for(i=0; i<=len; i++)
        {
            sub_str = str.substr(i,n);
            if(sub_str.size()==n)
            {
                c=0;
                pos=0;
                for(j=0; j<=len; j++)
                {
                    found = str.find(sub_str,pos);
                    if(found!=std::string::npos)
                    {
                        if(found!=temp)
                        {
                            c++;
                            temp=found;
                        }
                        pos++;
                    }
                }
                if(c>=maxi)
                {
                    maxi=c;
                    str_max = sub_str;
                }
            }
        }
        cout<<str_max<<endl;
    }
    return 0;
}
