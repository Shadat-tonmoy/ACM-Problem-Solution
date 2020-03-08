#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,d;
    char str[105],tmp[105];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>str;
            strcpy(tmp,str);
            next_permutation(str,str+strlen(str));
            if(strcmp(str,tmp)==0 || strcmp(str,tmp)<0)
                cout<<"no answer"<<endl;
            else cout<<str<<endl;

        }

    }

    return 0;
}
