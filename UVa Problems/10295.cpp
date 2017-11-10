#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,a,b,c,d,n,value,sum=0;
    string para[100000],index;
    char str[10000];
    map <string,int> data;
    map <string, int> :: iterator it;
    while(cin>>a>>b)
    {
        sum = 0;
        for(i=0; i<a; i++)
        {
            cin>>index>>value;
            data[index]=value;
        }
        /*for(it=data.begin(); it!=data.end(); it++)
            cout<<it->first<<" "<<it->second<<endl;*/
        for(k=0; k<b; k++)
        {
            sum=0;
            m=0;
            while(1)
            {
                //cin>>para[m++];
                scanf("%s",str);
                if(str[0]=='.')
                    break;
                para[m++]=str;
                //cout<<str[0]<<endl;

            }
            for(i=0; i<m; i++)
            {
                //cout<<para[i]<<" ";
                it=data.find(para[i]);
                if(it!=data.end())
                {
                    sum+=it->second;
                    //cout<<"Found"<<endl;
                }
                //else cout<<"Not Found"<<endl;
            }
            cout<<sum<<endl;
            //cout<<para[i]<<endl;
        }
        data.clear();
    }
    return 0;
}
