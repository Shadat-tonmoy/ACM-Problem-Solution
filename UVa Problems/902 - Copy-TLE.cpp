#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,pos=0,temp,maxi=0,c=0,a,c_final;
    string str,sub_str,str_max,substring[100000];
    size_t found;
    while(cin>>n>>str)
    {
        maxi=0;
        c=0;
        a=0;
        int len = str.size();
        for(i=0; i<=len; i++)
        {
            sub_str = str.substr(i,n);
            if(sub_str.size()==n)
            {
                substring[a++]=sub_str;
            }
        }
        for(i=0;i<a;i++)
        {
            c=0;
            for(j=0;j<a;j++)
            {
                if(substring[i]==substring[j])
                {
                    c++;
                }
            }
            c_final=c-1;
            if(c_final>maxi)
            {
                maxi=c_final;
                str_max = substring[i];
            }
        }
        cout<<str_max<<endl;
    }
    return 0;
}
