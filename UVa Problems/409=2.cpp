#include<bits/stdc++.h>
using namespace std;
string word[10000],str[10000];
int w,s;
bool f=false;
int found (string s)
{
    //size_t f;
    int i,j,k,l,m=0,n,c=0,pos=0,a;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;
    }
    for(i=0; i<w; i++)
    {
        //a=0;
        //bool f=false;
        for(j=0; j<s.size(); j++)
        {
            f=false;
            if(s[j]==word[i][0])
            {
                a = j;
                for(k=0; k<word[i].size(); k++)
                {
                    if(s[j]==word[i][k])
                    {
                        f=true;
                        j++;
                        //a++;
                    }
                    else
                    {
                        f=false;
                        //a=k;
                        break;
                    }
                }
                if(f)
                {
                    c++;
                    j++;
                }
                else j=a+1;
            }

        }
    }
    return c;
}
int main ()
{
    int i,j,a=0,b=1,d,N,f[1000],ck=0;
    while(cin>>w>>s)
    {
        //ck++;
        int maxi = 0;
        a=0;
        getchar();
        for(i=0; i<w; i++)
            getline(cin,word[i]);//cin>>word[i];
        //getchar();
        for(i=0; i<s; i++)
        {
            getline(cin,str[i]);
        }
        /*for(i=0;i<w;i++)
            cout<<word[i]<<" ";*/
        for(i=0; i<s; i++)
        {
            d = found(str[i]);
            if(d>=maxi)
                maxi=d;
            f[i]=d;
            //cout<<d<<endl;
        }
        printf("Excuse Set #%d\n", b);
        for(i=0; i<s; i++)
        {
            if(f[i]==maxi)
                cout<<str[i]<<endl;
        }
        cout<<endl;
        b++;
    }

    return 0;
}
