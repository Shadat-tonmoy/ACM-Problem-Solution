#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c;
    string str1,str2;
    map <string,string> data;
    map <string, string> :: iterator it;
    while(cin>>n)
    {
        getchar();
        for(i=0;i<n;i++)
        {
            getline(cin,str1);
            //getchar();
            getline(cin,str2);
            //getchar();
            data[str1]=str2;
        }
        //printf("Output : \n");
        cin>>n;
        getchar();
        for(i=0;i<n;i++)
        {
            getline(cin,str1);
            it=data.find(str1);
            if(it!=data.end())
                cout<<it->second<<endl;
        }
        //for(it=data.begin();it!=data.end();it++)
          //  cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
