#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,word,len;
    char str[100005];
    while(cin>>str)
    {
        word = 1;
        len = strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]>='A' && str[i]<='Z')
                word++;
        }
        cout<<word<<endl;

    }

    return 0;
}
