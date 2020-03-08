#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,q,a,c,len,sz;
    char str[10005];
    bool funny;
    while(cin>>n)
    {
        map<char,int> freq;
        for(l=1; l<=n; l++)
        {
            c=0;
            cin>>str;
            map<char,bool> found;
            len = strlen(str);
            for(i=0; i<len; i++)
            {
                if(!found[str[i]])
                {
                    found[str[i]]=true;
                    freq[str[i]]++;
                    if(freq[str[i]]==n)
                        c++;
                }
            }
        }

        cout<<c<<endl;
    }

    return 0;
}
