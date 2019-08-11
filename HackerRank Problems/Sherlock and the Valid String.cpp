#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,c,lenA,lenB,index,need,extra;
    char str[100105];
    bool found;
    while(cin>>str)
    {
        map<char,int> freq;
        map<char,int> :: iterator it,it2;
        found = false;
        for(i=0;str[i]!='\0';i++)
        {
            freq[str[i]]++;
            //cout<<str[i]-'0'<<endl;
        }
        for(it=freq.begin();it!=freq.end();it++)
        {
            c=0;
            for(it2=freq.begin();it2!=freq.end();it2++)
            {
                if(freq[it2->first]<freq[it->first])
                    c+=freq[it2->first];
                else c+=freq[it2->first]-freq[it->first];
            }
            if(c==0 || c==1)
            {
                found = true;
                break;
            }
        }
        if(found)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
