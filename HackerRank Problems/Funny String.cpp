#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,q,a,c,len,sz;
    char str[10005];
    bool funny;
    while(cin>>n)
    {
        for(l=1; l<=n; l++)
        {
            funny = true;
            cin>>str;
            len = strlen(str);
            for(i=0,j=len-1; i<len-1; i++,j--)
            {
                if(abs(str[i+1]-str[i]) == abs(str[j-1]-str[j]))
                    funny = true;
                else
                {
                    funny = false;
                    break;
                }
            }
            if(funny)
                cout<<"Funny"<<endl;
            else cout<<"Not Funny"<<endl;

        }
    }

    return 0;
}
