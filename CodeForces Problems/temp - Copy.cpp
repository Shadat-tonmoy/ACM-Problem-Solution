#include<bits/stdc++.h>
using namespace std;
void split(string str,bool isKey);
vector<string> value;
vector<int> key;
map<int,string> ans;
map<int,string> :: iterator it;
int main()
{
    int i,j,k,l,m,n,a,b,c,tc;
    string str,keys,values;
    while(cin>>tc)
    {
        bool blank = false;
        getchar();
        for(a=1; a<=tc; a++)
        {
            getchar();
            getline(cin,keys);
            getline(cin,values);
            split(keys,true);
            split(values,false);
            for(int i=0; i<key.size(); i++)
                ans[key[i]] = value[i];

            if (blank)
                cout << endl;
            blank = true;
            //cout<<"ans \n\n"<<endl;
            for(it=ans.begin(); it!=ans.end(); it++)
                cout<<it->second<<endl;
            ans.clear();
            key.clear();
            value.clear();
        }
    }


    return 0;
}
void split(string str,bool isKey)
{
    int l = str.size();
    string tmp="";
    vector<string> nums;
    for(int i=0; i<l; i++)
    {
        if((str[i]>='0' && str[i]<='9') || str[i]=='.' || str[i]=='-')
            tmp+=str[i];
        else if(tmp!="")
        {
            if(isKey)
            {
                int k = 0;
                int val;
                for(int l=0; l<tmp.size(); l++)
                {
                    val = tmp[l]-'0';
                    k = k*10;
                    k += val;
                }

                key.push_back(k);
            }
            else value.push_back(tmp);
            tmp="";
        }
    }
    if(isKey)
    {
        int k = 0;
        int val;
        for(int l=0; l<tmp.size(); l++)
        {
            val = tmp[l]-'0';
            k = k*10;
            k += val;
        }

        key.push_back(k);
    }

    else value.push_back(tmp);

}
