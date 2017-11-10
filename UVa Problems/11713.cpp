#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    int i,j,k,l1,l2,m,n,a=0,b,c=0,t;
    char str1[10000],str2[10000];
    while(cin>>t)
    {
        for(i=1; i<=t; i++)
        {
            c=0;
            a=0;
            cin>>str1>>str2;
            l1=strlen(str1);
            l2=strlen(str2);
            if(l1==l2)
            {
                for(k=0; k<l1; k++)
                {
                    if(!(str1[k]=='a'||str1[k]=='e'||str1[k]=='i'||str1[k]=='o'||str1[k]=='u'))
                    {
                        if(str1[k]!=str2[k])
                            a++;
                    }
                }
                for(j=0; j<l1; j++)
                {
                    if((str1[j]=='a'||str1[j]=='e'||str1[j]=='i'||str1[j]=='o'||str1[j]=='u'))
                    {
                        if((str2[j]=='a'||str2[j]=='e'||str2[j]=='i'||str2[j]=='o'||str2[j]=='u'))
                        {
                            c=0;
                        }
                        else c++;
                    }
                }
                if(a==0 && c==0)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
