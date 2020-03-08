#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main ()
{
    char str[2000],ch,ch_lw,ch_up;
    int i,j,k,l,m,n,a,b,c,t,count_space=0,count_word=0;
    while(gets(str))
    {
        count_space=0;
        count_word=0;
        l=strlen(str);
        if(l==1 && str[0]=='*')
            break;
        ch=str[0];
        ch_lw=str[0]+32;
        ch_up=str[0]-32;
        for(i=0;i<l;i++)
        {
            if(str[i]==' ')
                count_space++;
        }
        for(i=0;i<l;i++)
        {
            if(str[i]==' ' && (str[i+1]==ch || str[i+1]==ch_lw || str[i+1]==ch_up))
                    count_word++;
        }
        if(count_space==count_word)
            cout<<"Y"<<endl;
        else cout<<"N"<<endl;

    }
    return 0;
}
