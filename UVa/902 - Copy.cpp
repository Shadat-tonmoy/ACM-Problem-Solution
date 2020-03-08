#include<bits/stdc++.h>
using namespace std;
int ihash(string s)
{
    int len = s.size();
    int h=0,p=3;
    for(int i=0;i<len;i++)
    {
        h = h + ((s[i]-96)*pow(p,i));
    }
    return h;
}
int hash_array[10000000];
string substr_array[10000000];
int main ()
{
    int i,j,k,l,m,n,maxi=0,c;
    string str,sub_str,max_str;
    while(cin>>n>>str)
    {
        int a=0,b=0;
        int str_len = str.size();
        for(i=0;i<str_len;i++)
        {
            sub_str = str.substr(i,n);
            if(sub_str.size()==n)
                substr_array[a++]=sub_str;
        }
        for(i=0;i<a;i++)
        {
            hash_array[b++] = ihash(substr_array[i]);
        }
        for(i=0;i<b;i++)
        {
            c=0;
            for(j=0;j<b;j++)
            {
                if(i!=j)
                {
                    if(hash_array[i]==hash_array[j])
                    {
                        if(substr_array[i]==substr_array[j])
                            c++;
                    }

                }
            }
            if(c>maxi)
            {
                maxi=c;
                max_str = substr_array[i];
            }

        }
        cout<<max_str<<endl;
        maxi = 0;

    }
    return 0;
}
