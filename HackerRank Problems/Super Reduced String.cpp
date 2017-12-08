#include<bits/stdc++.h>
using namespace std;
char str[200];
void deleteAtRange(int,int);
int main()
{
    int a,b,len;
    bool emptyString,flag;
    while(cin>>str)
    {
        emptyString = false;
        while(true)
        {
            flag = false;
            len = strlen(str);
            if(len==0)
            {
                emptyString = true;
                cout<<"Empty String"<<endl;
                break;
            }
            for(int i=0;i<len;i++)
            {
                if(str[i]==str[i+1])
                {
                    deleteAtRange(i,i+1);
                    flag = true;
                    break;
                }
            }
            if(!flag)
            {
                cout<<str<<endl;
                break;
            }

        }



    }

    return 0;
}
void deleteAtRange(int a,int b)
{
    int len = strlen(str);
    int diff = b-a;
    for(int i=a;i<len;i++)
    {
        str[i] = str[i+diff+1];
    }
}
