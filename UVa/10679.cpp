#include<iostream>
#include<cstring>
using namespace std;
char str1[1000000],str2[1000000];
int main ()
{
    int i,j,k,l1,l,m,n,a,b,l2,t,q,c;
    cin>>t;
    while(t--)
    {
        cin>>str1;
        l1=strlen(str1);
        cin>>q;
        while(q--)
        {
            a=0;
            c=0;
            cin>>str2;
            l2=strlen(str2);
            for(k=0; k<l1; k++)
            {

                if(str1[k]==str2[0])
                {
                    for(l=k; a<l2; l++)
                    {
                        if(str1[l]==str2[a++])
                        {
                            c++;
                        }
                        else
                        {
                            a=0;
                            c=0;
                            break;
                        }
                    }
                }
            }
            if(c==l2)
                cout<<"y"<<endl;
            else cout<<"n"<<endl;
        }
    }


    return 0;
}
