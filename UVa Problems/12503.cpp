#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    int i,j,k,l,m,a,b,c,num[200],sum=0,t,n,pos=0;
    while(cin>>t)
    {
        for(i=1; i<=t; i++)
        {

            pos=0;
            cin>>n;
            for(j=1; j<=n; j++)
            {
                getchar();
                getline(cin,str);
                if(str=="LEFT")
                {
                    pos--;
                    num[j]=-1;
                    printf("For Left : ");
                    cout<<pos<<" "<<num[j]<<endl;
                }
                else if(str=="RIGHT")
                {
                    pos++;
                    num[j]=1;
                    printf("For Right : ");
                    cout<<pos<<" "<<num[j]<<endl;
                }
                else
                {
                    for(k=0; k<str.length(); k++)
                    {
                        if(str[k]>=48 && str[k]<=57)
                        {
                            sum=sum*10;
                            sum=sum+(str[k]-48);
                        }
                    }
                    //cout<<sum<<endl;
                    pos=pos+num[sum];
                }
            }
            cout<<pos<<endl;

        }
    }


    return 0;
}
