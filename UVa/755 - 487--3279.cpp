#include<bits/stdc++.h>
using namespace std;
void removeHyphen(string str);
void addHyphen(string str);
void formatString(string str);
map<string,int> freq;
map<string,int> :: iterator it;
int main()
{
    int i,j,k,l,m,n,a,b,c,tc;
    string str;
    while(cin>>tc)
    {

        bool blank = false;
        for(a=1; a<=tc; a++)
        {
            cin>>n;
            c=0;
            for(i=1; i<=n; i++)
            {
                cin>>str;
                formatString(str);
            }
            if (blank)
                cout << endl;
            blank = true;
            for(it=freq.begin();it!=freq.end();it++)
            {
                if(it->second>1)
                {
                    cout<<it->first<<" "<<it->second<<endl;
                    c++;
                }
            }
            if(c==0)
                cout<<"No duplicates."<<endl;
            freq.clear();
        }
    }
}
void formatString(string str)
{
    int len = str.size();
    string str2="";
    int j =0;
    for(int i=0; i<len; i++)
    {
        if(str[i]!='-')
        {
            str2+=str[i];
        }

    }
   // cout<<str2<<endl;
    str = str2;
    str.insert(3,"-");
    len = str.size();
    for(int i=0;i<len;i++)
    {
        if(str[i]=='A' || str[i]=='B' || str[i]=='C')
            str[i]='2';
        else if(str[i]=='D' || str[i]=='E' || str[i]=='F')
            str[i]='3';
        else if(str[i]=='G' || str[i]=='H' || str[i]=='I')
            str[i]='4';
        else if(str[i]=='J' || str[i]=='K' || str[i]=='L')
            str[i]='5';
        else if(str[i]=='M' || str[i]=='N' || str[i]=='O')
            str[i]='6';
        else if(str[i]=='P' || str[i]=='R' || str[i]=='S')
            str[i]='7';
        else if(str[i]=='T' || str[i]=='U' || str[i]=='V')
            str[i]='8';
        else if(str[i]=='W' || str[i]=='X' || str[i]=='Y')
            str[i]='9';
    }
    //cout<<str<<endl;
    freq[str]++;
}

