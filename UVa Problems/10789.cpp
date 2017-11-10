#include<bits/stdc++.h>
using namespace std;
bool isPrime(int a)
{
    if(a==1)
        return false;
    int i,j,k,l,m,n,flag=0;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        return false;
    else return true;
}
int main()
{
    int i,j,k,l,m,n,a,b,c,t,freq[10000];
    string str;
    while(cin>>t)
    {
        for(m=1;m<=t;m++)
        {
            memset(freq,0,sizeof freq);
            bool found = false;
            cin>>str;
            sort(str.begin(),str.end());
            for(i=0;i<str.size();)
            {
                if((str[i]>='A' && str[i]<='Z') ||(str[i]>='a' && str[i]<='z') ||(str[i]>='0' && str[i]<='9') )
                {
                    c = count(str.begin(),str.end(),str[i]);
                    a = str[i];
                    freq[a] = c;
                    //cout<<str[i]<<" : "<<c<<endl;
                    i = i+c;
                }
            }
            printf("Case %d: ",m);
            for(i=48;i<=125;i++)
            {
                if(freq[i]!=0)
                {
                    if(isPrime(freq[i]))
                    {
                        printf("%c",i);
                        found = true;
                    }
                }
            }
            if(found)
                printf("\n");
            if(!found)
                printf("empty\n");
        }

    }
    return 0;
}
