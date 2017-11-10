#include<bits/stdc++.h>
using namespace std;
string sub[10000000];
int main ()
{
    string a,sub_a,rev;
    while(cin>>a)
    {
        int i,j,k,l,m,n,b,c,sub_len,x=0,p;
        int len = a.length();
        l=1;
        for(l=1; l<=len; l++)
        {
            for(j=0; j<len; j++)
            {
                sub_a = a.substr(j,l);
                sub_len = sub_a.length();
                if(sub_len==l)
                {
                    k=0;
                    p=0;
                    for(i=sub_len-1; i>=0; i--)
                    {
                        rev[k++]=sub_a[i];
                    }
                    rev[k]='\0';
                    for(i=0; i<k; i++)
                    {
                        if(sub_a[i]==rev[i])
                            p=1;
                        else
                        {
                            p=0;
                            break;
                        }
                    }
                    if(p==1)
                        sub[x++]=sub_a;
                }
            }
        }
        int coun=0,sum=0;
        for(i=0; i<x; i++)
        {
            for(j=i; j<x; j++)
            {
                if(sub[j]==sub[i])
                    coun++;
                //cout<<coun<<endl;
            }
            if(coun==1)
                sum++;
            coun=0;
        }
        cout<<"The string '"<<a<<"' contains "<<sum<<" palindromes."<<endl;
    }
    return 0;
}
