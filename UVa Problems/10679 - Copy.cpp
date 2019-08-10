#include<iostream>
#include<cstring>
#include<string>
using namespace std;
string str1,str2;
int main ()
{
    long long int i,j,k,l1,l,m,n,a,b,l2,t,q,c;
    while(cin>>t)
    {
        for(l=1;l<=t;l++)
        {
            cin>>str1;
            l1 = str1.length();
            cin>>q;
            for(i=1;i<=q;i++)
            {
                cin>>str2;
                l2 = str2.length();
                c=0;
                for(j=0;j<l1;j++)
                {
                    if(str1.substr(j,l2)==str2)
                    {
                        c++;
                        break;
                    }

                }
                if(c==0)
                    cout<<"n"<<endl;
                else if(c==1)
                    cout<<"y"<<endl;
            }
        }
    }


    return 0;
}
