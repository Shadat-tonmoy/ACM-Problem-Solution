#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,d1,d2;
    bool one,zero;
    string str1,str2;
    char str3[100000];
    while(cin>>str1>>str2)
    {
        one = false;
        zero = false;
        d1=d2=0;
        for(i=0; i<str1.size(); i++)
        {
            if(i==0 && str1[i]==str2[i])
            {
                if(str1[i]=='0')
                    zero=true;
                else one=true;
                str3[i]=str1[i];
            }
            else if (i==0 && str1[i]!=str2[i])
            {
                if(!one)
                {
                    //cout<<"!one"<<endl;
                    if(str2[i]=='1')
                    {
                        //cout<<"2=one"<<endl;
                        str3[i]=str2[i];
                        d1++;
                        one = true;
                    }
                    else if(str1[i]=='1')
                    {
                        //cout<<"1=one"<<endl;
                        str3[i]=str1[i];
                        d2++;
                        one = true;
                    }
                }
                else if(!zero)
                {
                    if(str2[i]=='0')
                    {
                        str3[i]=str2[i];
                        d1++;
                        zero = true;
                    }
                    else if(str1[i]=='0')
                    {
                        str3[i]=str1[i];
                        d2++;
                        zero = true;
                    }
                }

            }
            else if(str1[i]==str2[i])
            {
                str3[i]=str1[i];
            }
            else if(str1[i]!=str2[i])
            {
                if(d1>d2)
                {
                    str3[i]=str1[i];
                    d2++;
                }
                else if(d1<=d2)
                {
                    str3[i]=str2[i];
                    d1++;
                }
            }
            //cout<<"d1 : "<<d1<<" d2 : "<<d2<<" str2 : "<<str3<<endl;
        }
        str3[i]='\0';
        //cout<<str3<<endl;
        if(d1==d2)
        {
            cout<<str3<<endl;
        }
        else cout<<"impossible"<<endl;



    }


    return 0;
}
