#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,c,lenA,lenB,index,need,extra;
    char str[100105];
    bool found;
    while(cin>>str)
    {

        int freq[30];
        memset(freq,0,sizeof(freq));
        found = false;
        for(i=0;str[i]!='\0';i++)
        {
            freq[(int)str[i]-97]++;
            //cout<<(int)str[i]<<endl;
        }
        for(i=0;i<26;i++)
        {
            c=0;
            for(j=0;j<26;j++)
            {
                if(freq[j]<freq[i])
                    c+=freq[j];
                else c+=freq[j]-freq[i];
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
