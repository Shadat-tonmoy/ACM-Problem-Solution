#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    map <string,string> data;
    map <string,string> :: iterator it;
    string str1,str2,str3,input;
    char str[1000],strr[10000];
    while(getline(cin,str1))
    {
        if(str1=="")
        {
            while(scanf("%s",strr)!=EOF)
            {
                input=strr;
                //cout<<input<<endl;
                it = data.find(input);
                if(it!=data.end())
                    cout<<it->second<<endl;
                else cout<<"eh"<<endl;
            }
            //for(it=data.begin();it!=data.end();it++)
            //  cout<<it->first<<" "<<it->second<<endl;
            //break;
        }
        else
        {
            i=0;
            j=0;
            /*for(i=0;str1[i]!=' ';i++)
                str[i]=str1[i];*/

            while(str1[i]!=' ')
            {
                str[i]=str1[i];
                i++;
            }
            str[i]='\0';
            str2=str;
            i++;
            while(str1[i]!='\0')
            {
                str[j]=str1[i];
                i++;
                j++;
            }
            str[i]='\0';
            str3 = str;
            data[str3]=str2;
            //printf("OUtPUt : ");
            //cout<<str2<<" "<<str3<<endl;
            //cout<<endl;
        }
        //str1.clear();
    }




    return 0;
}
