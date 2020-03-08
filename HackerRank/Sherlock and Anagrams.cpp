#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,a,b,c,len,tc,x,y,z,sz;
    string str,tmp;
    while(cin>>tc)
    {
        for(z=1; z<=tc; z++)
        {
            c=0;
            vector<string> strList;
            map<string,int> freq;
            map<string,int> :: iterator it;
            cin>>str;
            len = str.size();
            for(i=0; i<len; i++)
            {
                for(l=1; l<=len-i; l++)
                {
                    tmp = "";
                    for(j=i; j<i+l; j++)
                    {
                        tmp = tmp+str[j];
                    }
                    //cout<<tmp<<endl;
                    sort(tmp.begin(),tmp.end());
                    //cout<<tmp<<endl;
                    strList.push_back(tmp);
                }
            }
            sz = strList.size();
            for(i=0;i<sz;i++)
            {
                freq[strList[i]]++;
            }
            for(it=freq.begin();it!=freq.end();it++)
            {
                //cout<<it->first<<" "<<it->second<<endl;
                if(it->second>=2)
                {
                    k = it->second;
                    c+=k * (k-1)/2;
                }

            }
            cout<<c<<endl;
        }

    }





}
