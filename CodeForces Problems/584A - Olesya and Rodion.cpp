#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,digit;
    char num[500];
    while(cin>>digit>>n)
    {
        if(n==2)
        {
            for(i=0; i<digit; i++)
                num[i]='2';
            num[i]='\0';
        }
        else if(n==3)
        {
            for(i=0; i<digit; i++)
                num[i]='3';
            num[i]='\0';
        }
        else if(n==4)
        {
            for(i=0; i<digit; i++)
                num[i]='4';
            num[i]='\0';
        }
        else if(n==5)
        {
            for(i=0; i<digit; i++)
                num[i]='5';
            num[i]='\0';
        }
        else if(n==6)
        {
            for(i=0; i<digit; i++)
                num[i]='6';
            num[i]='\0';
        }
        else if(n==7)
        {
            for(i=0; i<digit; i++)
                num[i]='7';
            num[i]='\0';
        }
        else if(n==8)
        {
            for(i=0; i<digit; i++)
                num[i]='8';
            num[i]='\0';
        }
        else if(n==9)
        {
            for(i=0; i<digit; i++)
                num[i]='9';
            num[i]='\0';
        }
        else if(n==10 && digit>1)
        {
            num[digit-1]='0';
            for(i=0; i<digit-1; i++)
                num[i]='3';
            num[i+1]='\0';
        }
        else
        {
            num[0]='-';
            num[1]='1';
            num[2]='\0';
        }
        cout<<num<<endl;


    }


    return 0;

}


