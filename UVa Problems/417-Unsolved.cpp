#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,d,e,f,g;
    char str[20000];// = "abcdefghijklmnopqrstuvwxyz",sub;
    map <string,int> data;
    map <string,int> :: iterator it;
    string st[100000],str2;
    int len = 3;
    a=0;
    for(i='a'; i<='z'; i++)
    {
        for(j=i+1,k=1;j<='z';)
        {
            str[0]=i;
            str[k]=j;
            if(k==len)
            {
                k=1;
                //j++;
                //k++;
                str2=str;
                st[a++]=str2;
            }
            else
            {
                j++;
                k++;
            }
        }
    }
    for(i=0;i<240;i++)
        cout<<st[i]<<endl;
    return 0;
}
