#include<bits/stdc++.h>
using namespace std;
string cont[100000];
char str[1000000],tmp[10000000];
int main()
{
    int i,j,k,l,m,n,a,b,c,d,freq[100000]={0};
    while(cin>>n)
    {
        memset(freq,0,sizeof freq);
        getchar();
        for(m=0;m<n;m++)
        {
            gets(str);
            l = strlen(str);
            a=0;
            for(i=0;i<l;i++)
            {
                if(str[i]>='A' && str[i]<='Z')
                {
                    for(j=i;str[j]!=' ';j++)
                    {
                        tmp[a]=str[j];
                        a++;
                        //cout<<str[j];
                    }
                    //cout<<endl;
                    tmp[a]='\0';
                    cont[m]=tmp;//.assign(tmp);
                    break;
                }
            }
            //cout<<tmp<<endl;
        }
       // sort(cont.begin(),cont.end());
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(cont[j]<cont[i])
                    swap(cont[i],cont[j]);
            }
        }
        for(i=0;i<n;)
        {
            for(j=i;j<=n;j++)
            {
                if(cont[i]==cont[j])
                {
                    freq[i]++;
                }
                else
                {
                    i=j;
                    break;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(freq[i]!=0)
                cout<<cont[i]<<" "<<freq[i]<<endl;
        }
           // cout<<freq[i]<<endl;

    }
    return 0;
}
