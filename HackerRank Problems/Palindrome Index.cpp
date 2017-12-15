#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,c,len,index;
    char str[100105];
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            cin>>str;
            c=0;
            len = strlen(str);
            //cout<<len<<endl;
            for(j=0,k=len-1; j<len/2; j++,k--)
            {
                if(str[j]!=str[k])
                {
                    //cout<<j<<" "<<k<<endl;
                    if(str[j]==str[k-1] && str[j+1]==str[k-2])
                    {
                        index = k;
                        k--;
                        c++;
                    }
                    else if(str[j+1]==str[k] && str[j+2] == str[k-1])
                    {
                        index = j;
                        j++;
                        c++;
                    }
                    else
                    {
                        c=-1;
                        break;
                    }
                }
            }
            //cout<<c<<endl;
            if(c==-1 || c==0 || c>1)
                cout<<-1<<endl;
            else cout<<index<<endl;

            //cout<<c<<endl;

        }
    }

    return 0;
}
